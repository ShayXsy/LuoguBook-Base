#include <cstdio>
#include <algorithm>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    std::sort(a, a + n);
    int delta = a[n - 1] - a[0];
    printf("%d\n", delta);
    return 0;
}
