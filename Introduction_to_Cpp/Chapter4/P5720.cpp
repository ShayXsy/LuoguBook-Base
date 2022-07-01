#include <cstdio>

int main() {
    int a, days = 0;
    scanf("%d", &a);
    for (int i = a; i >= 1; i /= 2)
        days++;
    printf("%d\n", days);
    return 0;
}
