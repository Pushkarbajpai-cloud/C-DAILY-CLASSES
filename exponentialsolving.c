#include <stdio.h>
long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
double power(double x, int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * x;
    }
    return result;
}
int main() {
    double x, sum = 1;  
    int n, i;
    printf("Enter value of x: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum = sum + power(x, i) / factorial(i);
    }
    printf("e^%.2lf = %.6lf\n", x, sum);
    return 0;
}
