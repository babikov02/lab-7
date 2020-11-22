using namespace std;
#include <iostream>
#include<ctime>


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int k;
	cout << "Введите число от 0 до 15: ";
	cin >> k;

	const int n = 4, m = 3;
	int a[n][m] = {};

	for (int i = 0; i < n; ++i)  // Выводим на экран двумерный массив
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = rand() % 15 + 1;
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";


	for (int i = 0; i < n; ++i) // Заменяем элементы меньше заданного числа
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] < k)
			{
				a[i][j] = k;
			}
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}