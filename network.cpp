// ���������� �����
#include <iostream>
#include <fstream>
#include <math.h>

#include "network.h"
#include "matrix.h"

// ������������ �����
using namespace std;

// ��������
float nueral_network::sigm(float x)
{
	while (x > 5 || x < -5)
		x /= 1.5;
	return 1 / (1 + exp(-x));
}

// ����������� ��������
float nueral_network::dSigm(float x)
{
	return x * (1 - x);
}

// ����������� ��������� ����
nueral_network::nueral_network()
{
	n = 0;
	layers = nullptr;
	weights = nullptr;
	d_weights = nullptr;
	nuerals = nullptr;
	nuerals_errs = nullptr;
	biases = nullptr;
	d_biases = nullptr;
	alpha = 0;
	betta = 0;
}

// ������������� ��������� ����
void nueral_network::init(int* layers, int n, float alpha, float betta)
{
	this->n = n;
	this->layers = new int[n];
	for (int i = 0; i < n; i++)
	{
		this->layers[i] = layers[i];
	}
	nuerals = new float* [n];
	nuerals_errs = new float* [n];
	biases = new float* [n];
	d_biases = new float* [n];
	for (int i = 0; i < n; i++)
	{
		nuerals[i] = new float[this->layers[i]];
		nuerals_errs[i] = new float[this->layers[i]];
		biases[i] = new float[this->layers[i]];
		d_biases[i] = new float[this->layers[i]];
		for (int j = 0; j < this->layers[i]; j++)
		{
			nuerals[i][j] = 0;
			nuerals_errs[i][j] = 0;
			biases[i][j] = 0;
			d_biases[i][j] = 0;
		}
	}
	weights = new matrix[n - 1];
	d_weights = new matrix[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		weights[i].init(layers[i + 1], layers[i]);
		d_weights[i].init(layers[i + 1], layers[i]);
		weights[i].setRandom(n - i * 2);
		d_weights[i].setNULL();
	}
	this->alpha = alpha;
	this->betta = betta;
}

// ���������� ����� ������ �� �����
void nueral_network::setWeights(const char* path)
{
	std::ifstream file;
	file.open(path);

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < layers[i + 1]; j++)
		{
			for (int k = 0; k < layers[i]; k++)
			{
				float weight = 0;
				file >> weight;
				weights[i].set(j, k, weight);
			}
		}
		for (int j = 0; j < layers[i + 1]; j++)
			file >> biases[i + 1][j];
	}

	file.close();
}

// ������� ������ ���������
void nueral_network::clear()
{
	for (int i = 0; i < n; i++)
	{
		delete[] nuerals[i];
		delete[] nuerals_errs[i];
		delete[] biases[i];
		delete[] d_biases[i];
	}

	delete[] nuerals;
	delete[] nuerals_errs;
	delete[] biases;
	delete[] d_biases;
	delete[] weights;
	delete[] layers;

	n = 0;
	alpha = 0;
	betta = 0;
}

// ������ �������� �������� �� �����
void nueral_network::printWeights()
{
	cout << endl;
	cout << "====================================" << endl;

	for (int i = 0; i < n - 1; i++)
	{
		cout << "Weights " << i << "->" << i + 1 << " : " << endl;
		weights[i].print();
		cout << "Biases " << i + 1 << " : " << endl;
		for (int j = 0; j < layers[i + 1]; j++)
			cout << biases[i + 1][j] << "\t";
		cout << endl;
	}

	cout << "====================================" << endl;
	cout << endl;
}

// ������ �������� �������� �� �����
void nueral_network::printNuerals()
{
	cout << endl;
	cout << "************************************" << endl;
	cout << "Nuerals: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < layers[i]; j++)
			cout << nuerals[i][j] << "\t";
		cout << endl;
	}

	cout << "************************************" << endl;
	cout << endl;
}

// ������ ���������������
int nueral_network::forwordPropagetion(float& value, float* vector)
{
	for (int i = 0; i < layers[0]; i++)
		nuerals[0][i] = vector[i];
	for (int i = 1; i < n; i++)
	{
		weights[i - 1].multi(nuerals[i - 1], biases[i], nuerals[i]);
		for (int j = 0; j < layers[i]; j++)
			nuerals[i][j] = sigm(nuerals[i][j]);
	}

	int max = 0;
	for (int i = 0; i < layers[n - 1]; i++)
	{
		if (nuerals[n - 1][i] > nuerals[n - 1][max])
			max = i;
	}
	value = nuerals[n - 1][max];

	return max;
}

// �������� ���������������
float nueral_network::backPropagetion(float* example, float* p)
{
	float value = 0;
	forwordPropagetion(value, example);
	for (int i = 0; i < layers[n - 1]; i++)
		nuerals_errs[n - 1][i] = (p[i] - nuerals[n - 1][i]) * dSigm(nuerals[n - 1][i]);

	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < layers[i]; j++)
		{
			float sum_errs = 0;
			for (int k = 0; k < layers[i + 1]; k++)
				sum_errs += weights[i].get(k, j) * nuerals_errs[i + 1][k];
			nuerals_errs[i][j] = sum_errs * dSigm(nuerals[i][j]);
		}
	}

	value = 0;
	for (int i = 0; i < layers[n - 1]; i++)
		value += (p[i] - nuerals[n - 1][i]) * (p[i] - nuerals[n - 1][i]);
	value /= layers[n - 1];
	return value;
}

// ��������� �������� �����
void nueral_network::learn()
{
	for (int k = 0; k < n - 1; k++)
	{
		for (int i = 0; i < layers[k + 1]; i++)
		{
			for (int j = 0; j < layers[k]; j++)
			{
				weights[k].set(i, j, weights[k].get(i, j) + alpha * nuerals[k][j] * nuerals_errs[k + 1][i] + betta * d_weights[k].get(i, j));
				d_weights[k].set(i, j, alpha * nuerals[k][j] * nuerals_errs[k + 1][i] + betta * d_weights[k].get(i, j));
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < layers[i]; j++)
		{
			biases[i][j] += alpha * nuerals_errs[i][j] + betta * d_biases[i][j];
			d_biases[i][j] = alpha * nuerals_errs[i][j] + betta * d_biases[i][j];
		}
	}
}
