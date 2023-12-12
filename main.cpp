#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    char ch;
    int height = 0;
    int count = 0;
    bool q = 0;

    cout << "Введите символ: ";
    cin >> ch;
    cout << "Введите высоту треугольника: ";
    cin >> height;
    cout << "Заполненный или пустой? (1, 0) ";
    cin >> q;

    if (q)
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++) cout << ' ';
        for (int j = height - 2 * i; j <= height; j++) cout << ch;

        cout << endl;
    }
    return 0;
}