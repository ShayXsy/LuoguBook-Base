#include <cstdio>

int main() {
    int n, k, gsX = 0, gsY = 0;
    double sumX, sumY;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sumX += i;
            gsX += 1;
        } else {
            sumY += i;
            gsY += 1;
        }
    }
    double pjsX = sumX / gsX;
    double pjsY = sumY / gsY;
    printf("%.1lf %.1lf\n", pjsX, pjsY);
    return 0;
}
