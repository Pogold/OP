#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a = 0, b = 0, c = 0, y, xn = 0, xk = 0, dx = 0; // задаём нужные нам переменные 
	cout << "Введите числа a, b и c\n"; // просим ввести нужные переменные
	cin >> a >> b >> c;
	cout << "Введите начало, конец промежутка и шаг\n";
	cin >> xn >> xk >> dx;
	if (xn < xk && dx < abs(xk - xn) && c != 0) { // проверка на корректность ввода данных
		cout << "x\ty\n";
		for (xn; xn <= xk; xn = xn + dx) { // создаём цикл для решения системы

            if ((xn - c) == 0) {
				cout << xn << "\t" << "Нет решения\n";
				continue;
			}
			if (xn < 3 && b != 0) { 
				y = a *pow(xn, 2) - b*xn+c;
				cout << xn << "\t" << y << "\n"; 
			} 

			if ((xn > 3 && b == 0) ) {
				y = (xn - a) / (xn - c);
				cout << xn << "\t" << y << "\n";
			}

			

			if ((xn < 3 && b == 0) || (xn == 3) || (xn > 3 && b != 0)) {
				y = xn / c;
				cout << xn << "\t" << y << "\n"; 
			}
		}
	}
	else
		cout << "Некорректный ввод данных";
	return 0;
}
