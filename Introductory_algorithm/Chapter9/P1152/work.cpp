#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int n;

int main() {
    scanf("%d", &n);
    int a[n + 1];
    int b[n];
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n - 1; i++)
        b[i] = abs(a[i] - a[i + 1]);
    sort(b + 1, b + n);
    for (int i = 1; i < n; i++)
        if (b[i] != i) {
            printf("Not jolly");
            return 0;
        }
    printf("Jolly");
    puts("");
    return 0;
}
