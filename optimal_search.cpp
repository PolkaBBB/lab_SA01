//Реализация метода "Оптимальный пассивный поиск"
#include <iostream>
#include <math.h>
#include <map>
#include <algorithm>

void main() {
double a = 0.;
double b = 3.;
double eps = 0.05;
int N = ((b - a) / eps) - 1;
std::map<double, double> table;
for (int i = 0; i < N; i++) {
  double f = (-sqrt(a + eps)) * sin(a + eps);
  table[a + eps] = f;
  a = a + eps;
}
std::map<double, double>::iterator it = table.begin();
for (int i = 0; it != table.end(); it++, i++) {
  std::cout << i+1 << ") " << "for " << it->first << " value " << it->second << std::endl;
}
}
