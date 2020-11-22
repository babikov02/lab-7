using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	cout << "Введите число от 0 до 12: ";
	cin >> k;

	const int n = 4, m = 3;
	int a[n][m] = {};
	srand(time(NULL));
	for (int i = 0; i < n; ++i) // Выводим на экран двумерный массив
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = rand() % 12;
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	int l;
	for (int i = 0; i < n; ++i) // Находим номера всех элементов больше заданного числа
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] > k)
			{
				l = (i, j);
				cout << l << " ";
			}
		}
	}
	cout << "\n";
}