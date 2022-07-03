#include <cstdio>

int main() {
    int k, sum = 0, total, f;
    scanf("%d", &k);
    f = total = 1;
    for (int i = 1; i <= k; i++) {
        sum += total;
        f--;
        if (f == 0) {
            total++;
            f = total;
        }
    }
    printf("%d\n", sum);
    return 0;
}
