#include <cstdio>
#include <cmath>
#include <algorithm>

int main() {
    int n, t11, t12, t21, t22, t31, t32;
    scanf("%d", &n);
    scanf("%d %d", &t11, &t12);
    scanf("%d %d", &t21, &t22);
    scanf("%d %d", &t31, &t32);
    int s1 = ceil((double) n / t11);
    int s2 = ceil((double) n / t21);
    int s3 = ceil((double) n / t31);
    int p1 = s1 * t12;
    int p2 = s2 * t22;
    int p3 = s3 * t32;
    int min = std::min({p1, p2, p3});
    printf("%d\n", min);
    return 0;
}
