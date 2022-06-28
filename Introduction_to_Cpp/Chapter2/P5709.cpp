#include <cstdio>
#include <algorithm>

int main() {
    int m, t, s;
    scanf("%d %d %d", &m, &t, &s);
    if (t == 0) {
        printf("0\n");
        return 0;
    }
    /* 程序中max(a,b)就是a,b中的最大值，如果m-s/tm−s/t比0小，大的就是0了，输出的就是0。 */
    if (s % t == 0) {
        printf("%d\n", std::max(m - s / t, 0));
    } else {
        printf("%d\n", std::max(m - s / t - 1, 0));
    }
    return 0;
}
