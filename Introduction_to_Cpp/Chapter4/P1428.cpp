#include <cstdio>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) sum++;
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\n");
    return 0;
}
