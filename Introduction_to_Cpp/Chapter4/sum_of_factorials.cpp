#include <cstdio>

int main() {
    long long s = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int factorial = 1;
        s += i * factorial;
        factorial = 1;
    }
    printf("%d\n", s);
    return 0;
}
