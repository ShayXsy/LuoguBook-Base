#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    bool status1 = false, status2 = false;
    int xa = 0, uim = 0, bwy = 0, zm = 0;
    if (x % 2 == 0) status1 = true;
    if (x >= 4 && x <= 12) status2 = true;
    if (status1 && status2) {
        xa = 1;
        uim = 1;
    }
    if (status1 || status2) uim = 1;
    if (status1 && !status2)    bwy = 1;
    if (!status1 && status2)    bwy = 1;
    if (!status1 && !status2)   zm = 1;
    printf("%d %d %d %d\n", xa, uim, bwy, zm);
    return 0;
}
