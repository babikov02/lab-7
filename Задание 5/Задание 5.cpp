using namespace std;
#include <iostream>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 4, m = 3;
    srand(time(NULL));
    int a[n][m];

    for (int i = 0; i < n; ++i) {  // Выводим на экран двумерный массив
        for (int j = 0; j < m; ++j)
        {
            a[i][j] = rand() % 5;
            cout.width(3);
            cout << a[i][j] << " ";

        }
        cout << endl; 
    }

    int k = 0;

    for (int i = 0; i < n; i++) // Нахождение количества нечетных чисел
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                k++;
            }
        }
    }

    cout << "Количество нечетных чисел: " << k << endl;

}