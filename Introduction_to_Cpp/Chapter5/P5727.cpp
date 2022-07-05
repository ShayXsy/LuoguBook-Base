#include <cstdio>

int a[10001] = {0};

int main() {
    int n, m, cnt = 1;
    scanf("%d", &n);
    m = n;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        a[cnt] = n;
        cnt++;
    }
    for (int k = cnt - 1; k > 0; k--) {
        printf("%d ", a[k]);
    }
    printf("%d\n", m);
    return 0;
}
