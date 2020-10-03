//Реализация метода Фиббоначи
#include <iostream>
#include "Header.h"
#include <math.h>
#include <map>
#include <algorithm>

void main() {
	double a = 0.;
	double b = 3.;
	double eps = 0.05;
	double l1 = b - a;
	double x, x2, f1, f2, znach, precision, l2;
	double x1 = 1.;
	double t = a;
	int N;
	std::cout << "Enter the number of operations:";
	std::cin >> N;
	std::cout << std::endl;
	for (int i = 3; i <= N; i++) {
		l2 = (l1 * F(i)) / F(i + 1);
		x2 = t + l2;
		precision = abs((x2 - x1)/2.);
		x = x2 - precision;
		std::cout << i - 2 << ")" << "  " << x;
		znach = f(x);
		std::cout << "  " << znach;
		x1 = x2 - (2 * precision);
		std::cout << "  " << precision << "  " << "| " << "left:" << x1 << "  right:" << x2;
		f1 = f(x1);
		f2 = f(x2);
		std::cout << "  " << f1 << "  " << f2 << std::endl;
		if (precision > eps) {
			if (f1 < f2) {
			  l1 = x2 - a;
			  t = a;
			}
			else {
				l1 = b - x1;
				t = x1;
				x1 = x2;
			}
		}
		else {
			std::system("pause");
		}
	}
}
