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

    if (x <= 0)
    {
        // прямая через точки (-6; 0) и (0; -R)
        y = R * (-6 - x) / 6;
        cout << "y = " << y << endl;
    }
    else if (x <= 3)
    {
        // нижняя четверть окружности с центром (0; 0)
        if (pow(R, 2) - pow(x, 2) < 0)
            cout << "Функция при таком R не определена" << endl;
        else
        {
            y = -sqrt(pow(R, 2) - pow(x, 2));
            cout << "y = " << y << endl;
        }
    }
    else if (x <= 6)
    {
        // верхняя четверть окружности с центром (6; 0)
        if (pow(R, 2) - pow(x - 6, 2) < 0)
            cout << "Функция при таком R не определена" << endl;
        else
        {
            y = sqrt(pow(R, 2) - pow(x - 6, 2));
            cout << "y = " << y << endl;
        }
    }
    else
    {
        // луч вдоль оси OX
        y = 0;
        cout << "y = " << y << endl;
    }

    return 0;
}
