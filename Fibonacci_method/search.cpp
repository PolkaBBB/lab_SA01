#include <iostream>
#include "Header.h"
#include <math.h>
#include <map>
#include <algorithm>

double F(int i){
 if (i < 1) return 0.;
 if (i == 1) return 1.;
 return F(i - 1) + F(i - 2);
}

double f(double x) {
    double znach_f = (-sqrt(x)) * sin(x);
    return znach_f;
}
