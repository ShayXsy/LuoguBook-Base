#include <cstdio>

int main() {
    int el;
    double sum = 0;
    scanf("%d", &el);
    if (el <= 150) {
        sum = 0;
        sum = el * 0.4463;
    } else if (el >= 151 && el <= 400) {
        sum = 0;
        sum += 150 * 0.4463;
        sum += (el - 150) * 0.4663;
    } else if (el >= 401) {
        sum = 0;
        sum += 150 * 0.4463;
        sum += (400 - 150) * 0.4663;
        sum += (el - 400) * 0.5663;
    }
    printf("%.1lf\n", sum);
    return 0;
}
