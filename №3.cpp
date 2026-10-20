#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    double a, b, c, x, y, t;
    cout << "Введите ребра кирпича a, b, c: ";
    cin >> a >> b >> c;
    cout << "Введите стороны отверстия x, y: ";
    cin >> x >> y;

    // упорядочиваем ребра кирпича: a <= b <= c
    if (a > b) { t = a; a = b; b = t; }
    if (b > c) { t = b; b = c; c = t; }
    if (a > b) { t = a; a = b; b = t; }

    // упорядочиваем стороны отверстия: x <= y
    if (x > y) { t = x; x = y; y = t; }

    // проходит наименьшая грань кирпича (ребра a и b)
    if (a <= x && b <= y)
        cout << "Кирпич пройдет в отверстие" << endl;
    else
        cout << "Кирпич не пройдет в отверстие" << endl;

    return 0;
}
