#include <cstdio>
#include <cmath>

int main() {
    double m, n;
    scanf("%lf %lf", &m, &n);
    double bmi = m / pow(n, 2);
    if (bmi < 18.5) printf("Underweight\n");
    else if (bmi >= 18.5 && bmi < 24) printf("Normal\n");
    else if (bmi >= 24) printf("%.6g\nOverweight\n", bmi);
    return 0;
}
