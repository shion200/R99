#include <stdio.h>
#include <math.h>
double f(double x) {
  return 4.0/(1 + x*x);
}


double x2(double x) {
  return x*x;
}

double integrate(double (* x)(double), double y, double z) {
    double i = y;
    double ans = 0;
    for (i; i<=z; i+=0.00001) {
        ans += 0.00001 * x(i);
    }
    return ans;
}




double absd(double x, double y) {
  double v = x - y;
  if (v > -v) {
    return v;
  } else {
    return -v;
  }
}

int integrate_test(void) {
  return absd(integrate(f, 0.0, 1.0), M_PI) < 0.0001 &&
    absd(integrate(x2, 0.0, 3.0), 9.0)   < 0.0001 &&
    absd(integrate(sin, 0.0, M_PI), 2.0) < 0.0001 &&
    absd(integrate(cos, 0.0, M_PI), 0.0) < 0.0001;
}
int main() {
    printf("%d",integrate_test());
    return 0;
}