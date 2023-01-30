#include <iostream>
#include <ctime>
#include <iomanip>

void fillMatrix(int** arr, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 70 + 1;
		}
	}
}

void showMatrix(int** arr, int n)
{
	std::cout << "Исходный двумерный массив: " << std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << std::setw(4) << arr[i][j];
		}
		std::cout << std::endl;
	}
}
 
void sumElem(int** arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i][n - 1 - i];
	}
	std::cout << "Сумма элементов, расположенных на побочной диагонали матрицы = " << sum;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите количество строк и столбцов двумерного массива: ";
	std::cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	fillMatrix(arr, n);
	showMatrix(arr, n);
	sumElem(arr, n);
	delete[]arr;
	return 0;
}