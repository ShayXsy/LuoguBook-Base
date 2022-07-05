#include <cstdio>

int main() {
    int a[1000], cnt = 0;
    for (int i = 0;; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) break;
        cnt = i;
    }
    for (int k = cnt; k >= 0; k--)
        printf("%d ", a[k]);
    printf("\n");
    return 0;
}
