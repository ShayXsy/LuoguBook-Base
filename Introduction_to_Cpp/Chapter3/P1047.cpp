#include <cstdio>
#include <cmath>
#include <algorithm>

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    std::sort(a, a + 3);
    if (a[0] + a[1] <= a[2] || a[0] + a[2] <= a[1] || a[1] + a[2] <= a[0]) {
        printf("Not triangle\n");
        return 0;
    }
    if (pow(a[0], 2) + pow(a[1], 2) > pow(a[2], 2)) {
        printf("Acute triangle\n");
    } else if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2)) {
        printf("Right triangle\n");
    } else if (pow(a[0], 2) + pow(a[1], 2) < pow(a[2], 2)) {
        printf("Obtuse triangle\n");
    }
    if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2]) {
        printf("Isosceles triangle\n");
    }
    if (a[0] == a[1] && a[1] == a[2] && a[2] == a[0]) {
        printf("Equilateral triangle\n");
    }
    return 0;
}
