#include <cstdio>

int main() {
    int x;
    unsigned long long n, sum = 0;
    scanf("%d %lld", &x, &n);
    for (int i = 0; i < n; i++) {
        if ((x != 6) && (x != 7)) sum += 250;
        if (x == 7) x = 1;
        else x++;
    }
    printf("%lld\n", sum);
    return 0;
}
