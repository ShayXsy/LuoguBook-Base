#include <cstdio>
#include <cmath>

int main() {
    int n, m = 0, s, total = 0, cnt = 0;
    scanf("%d", &n);
    while (m < pow(n, 2)) {
        scanf("%d", &s);
        cnt += 1;
        for (int i = s; i >= 1; i--) {
            if (total == n) {
                printf("\n");
                total = 0;
            }
            if (cnt % 2 != 0) printf("0");
            else printf("1");
            total++;
            m++;
        }
    }
    printf("\n");
    return 0;
}
