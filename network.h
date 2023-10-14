// ������ �� ���������� ���������
#pragma once

// ���������� �����
#include "matrix.h";

// ����� ��������� ����
class nueral_network
{
private:
	int n; // ���������� �����
	int* layers; // ���������� �������� �� ������ ����

	matrix* weights; // ������ �������� ��������
	matrix* d_weights; // ������ � ����������� �������� �� ���������� ��������

	float** nuerals; // ������ � ���������
	float** nuerals_errs; // ������ � �������� ��������

	float** biases; // ������ � ��������� ��������
	float** d_biases; // ������ � ����������� �������� �� ���������� ��������

	float alpha; // �������� ��������
	float betta; // ������

	float sigm(float x);
	float dSigm(float x);
public:
	nueral_network(); 
	void init(int* layers, int n, float alpha, float betta);
	void setWeights(const char* path);
	void clear();
	void printWeights();
	void printNuerals();
	int forwordPropagetion(float& value, float* vector);
	float backPropagetion(float* example, float* p);
	void learn();
};