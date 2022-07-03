#include <cstdio>
#include <algorithm>

#define MNN -2147483647

int main() {
    int n, a[499999], total = 0, maxn = MNN;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (a[i + 1] - a[i] == 1) total++;
        else total = 0;
        maxn = std::max(maxn, total);
    }
    printf("%d\n", maxn + 1);
    return 0;
}
