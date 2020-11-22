using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	const int n = 4, m = 3;
	int a[n][m];

	for (int i = 0; i < n; ++i) // Выводим на экран двумерный массив
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = rand() % 10;
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	int sum = 0, x = 0, sr = 0;
	for (int i = 0; i < n; ++i) // Нахождение суммы , количества и среднего арифметического четных элементов массива
	{
		for (int j = 0; j < m; ++j) {
			if (a[i][j] % 2 == 0)
			{
				sum += a[i][j];
				x++;
				sr = sum / x;
			}
		}
	}

	cout << "Сумма четных элементов в массиве: " << sum << "\n";
	cout << "Количество четных элементов в массиве: " << x << "\n";
	cout << "Среднее арифметическое четных элементов массива: " << sr << endl;
	return 0;
}