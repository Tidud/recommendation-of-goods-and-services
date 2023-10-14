// Включаеме файлы
#include <iostream>
#include <stdlib.h>

#include "matrix.h"

// Конструктор матрицы
matrix::matrix()
{
	rows = 0;
	columns = 0;
	data = nullptr;
}

// Инициализация матрицы
void matrix::init(int rows, int columns)
{
	data = new float* [rows];
	for (int i = 0; i < rows; i++)
		data[i] = new float[columns];
	this->rows = rows;
	this->columns = columns;
}

// Очистка матрицы
void matrix::clear()
{
	for (int i = 0; i < rows; i++)
		delete[] data[i];
	delete[] data;
	rows = 0;
	columns = 0;
}

// Получение элемента матрицы
float matrix::get(int i, int j)
{
	return data[i][j];
}

// Установка значения элементу матрицы
void matrix::set(int i, int j, float element)
{
	data[i][j] = element;
}

// Заполнение матрицы псевдорандомными числами
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

// Заполнение матрицы нулями
void matrix::setNULL()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			data[i][j] = 0;
	}
}

// Заполнение матрицы еденичками
void matrix::setOnes()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			data[i][j] = 1;
	}
}

// Матрично-векторное умножение
void matrix::multi(float* vector, float* bias, float*& result)
{
	for (int i = 0; i < rows; i++)
	{
		result[i] = 0;
		for (int j = 0; j < columns; j++)
			result[i] += data[i][j] * vector[j] + bias[i];
	}
}

// Геттер количества строк
int matrix::getRows()
{
	return rows;
}

// Геттер количества столбцов
int matrix::getColumns()
{
	return columns;
}

// Вывод матрицы на экран
void matrix::print()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			std::cout << data[i][j] << " ";
		std::cout << std::endl;
	}
}
