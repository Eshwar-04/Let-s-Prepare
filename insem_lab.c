#include <stdio.h>
#include <omp.h>
double f(double x) {
    return x * x; 
}
double trp(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
	int i;
    #pragma omp parallel for reduction(+:sum)
    for ( i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }
    return sum * h;
}
int main() {
    double a = 0.0, b = 10.0;
    int n = 10000; 
    double res = trp(a, b, n);
    printf("Trapezoidal Integration  %lf\n", res);
    return 0;
}

