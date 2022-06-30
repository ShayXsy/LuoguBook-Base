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
    printf("%d\n", a[0]);
    return 0;
}
