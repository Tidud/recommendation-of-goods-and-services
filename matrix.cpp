// ��������� �����
#include <iostream>
#include <stdlib.h>

#include "matrix.h"

// ����������� �������
matrix::matrix()
{
	rows = 0;
	columns = 0;
	data = nullptr;
}

// ������������� �������
void matrix::init(int rows, int columns)
{
	data = new float* [rows];
	for (int i = 0; i < rows; i++)
		data[i] = new float[columns];
	this->rows = rows;
	this->columns = columns;
}

// ������� �������
void matrix::clear()
{
	for (int i = 0; i < rows; i++)
		delete[] data[i];
	delete[] data;
	rows = 0;
	columns = 0;
}

// ��������� �������� �������
float matrix::get(int i, int j)
{
	return data[i][j];
}

// ��������� �������� �������� �������
void matrix::set(int i, int j, float element)
{
	data[i][j] = element;
}

// ���������� ������� ���������������� �������
void matrix::setRandom(int seed)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			data[i][j] = rand();
			while (data[i][j] > 5.0)
			{
				data[i][j] /= 5;
			}
			if (data[i][j] >= 3)
				data[i][j] = -data[i][j];
		}
	}
}

// ���������� ������� ������
void matrix::setNULL()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			data[i][j] = 0;
	}
}

// ���������� ������� ����������
void matrix::setOnes()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			data[i][j] = 1;
	}
}

// ��������-��������� ���������
void matrix::multi(float* vector, float* bias, float*& result)
{
	for (int i = 0; i < rows; i++)
	{
		result[i] = 0;
		for (int j = 0; j < columns; j++)
			result[i] += data[i][j] * vector[j] + bias[i];
	}
}

// ������ ���������� �����
int matrix::getRows()
{
	return rows;
}

// ������ ���������� ��������
int matrix::getColumns()
{
	return columns;
}

// ����� ������� �� �����
void matrix::print()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			std::cout << data[i][j] << " ";
		std::cout << std::endl;
	}
}
