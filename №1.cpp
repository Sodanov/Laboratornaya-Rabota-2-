#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    double x, y, R;
    cout << "Введите R: ";
    cin >> R;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    // верхний полукруг: y >= 0 и x^2 + y^2 <= R^2
    bool polukrug = (y >= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2));

    // треугольник с вершинами (0;0), (-R;-R), (0;-R)
    bool treugolnik = (x <= 0) && (y >= -R) && (y <= x);

    if (polukrug || treugolnik)
        cout << "Точка принадлежит области" << endl;
    else
        cout << "Точка не принадлежит области" << endl;

    return 0;
}
