#include <cstdio>
#include <cstring>
#include <algorithm>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    std::sort(a, a + n);
    double sum = 0;
    for (int i = 1; i < (n - 1); i++) {
        sum += a[i];
    }
    printf("%.2lf\n", sum / (n - 2));
    return 0;
}
