#include <iostream>

void findMaxAverage(int* arr, int size_arr, int k)
{
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += arr[i];
	}
	double maxS = sum;
	for (int i = k; i < size_arr; i++)
	{
		sum += arr[i] - arr[i - k];
		if (sum > maxS)
		{
			maxS = sum;
		}
	}
	double maxAv = maxS / k;
	std::cout << "������������ ������� �������� = " << maxAv;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_arr, k;
	std::cout << "������� ����������� �������: ";
	std::cin >> size_arr;
	int* arr = new int[size_arr];

	for (int i = 0; i < size_arr; i++)
	{
		std::cout << "������� [" << i << "] ������� �������: ";
		std::cin >> arr[i];
	}

	std::cout << "�������� 1-� ������: ";
	for (int i = 0; i < size_arr; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "������� ����� ������������ ����������: ";
	std::cin >> k;
	findMaxAverage(arr, size_arr, k);
	delete[]arr;
	return 0;
}