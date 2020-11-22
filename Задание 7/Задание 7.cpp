using namespace std;
#include <iostream>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 2, m = 2;
    srand(time(NULL));
    int a[n][m];

    for (int i = 0; i < n; ++i) // Выводим на экран двумерный массив
    
    {  
        for (int j = 0; j < m; ++j)
        {
            a[i][j] = rand() % 50;
            cout.width(3);
            cout << a[i][j] << " ";

        }
        cout << endl; 
    }

    int k = 0;

    for (int i = 0; i < n; i++) //Определение, является ли произведение элементов трехзначным числом
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j && (i * j) >= 100 && (i * j) < 1000)
            {
                k *= a[i][j];
                cout << "Произведение элементов является трёхзначным числом: " << k;
            }
            else { cout << "Произведение элементов НЕ является трёхзначным числом" << endl; }
        }
    }

    cout << k << endl;
}