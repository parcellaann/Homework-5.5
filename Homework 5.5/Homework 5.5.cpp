// Homework 5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

int main()
{
	int rows = 1, columns = 1;
	std::cout << "Enter the number of rows:\n";
	std::cin >> rows;
	std::cout << "Enter the number of columns:\n";
	std::cin >> columns;
	int arr[100][100];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << "Enter the " << j + 1 << " element of the " << i + 1 << " line: \n";
			std::cin >> arr[i][j];
		}
	}
	std::cout << "The entered array: \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "Inversion: \n";
	for (int j = 0; j < rows; j++)
	{
		for (int i = 0; i < columns; i++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}
