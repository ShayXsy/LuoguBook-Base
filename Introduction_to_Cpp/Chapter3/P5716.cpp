#include <cstdio>

int main() {
    int n, y;
    scanf("%d %d", &n, &y);
    bool tof;
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        tof = true;
    } else {
        tof = false;
    }
    if (y == 1) {
        printf("31\n");
    } else if (y == 2) {
        if (tof) printf("29\n");
        else printf("28\n");
    } else if (y == 3) {
        printf("31\n");
    } else if (y == 4) {
        printf("30\n");
    } else if (y == 5) {
        printf("31\n");
    } else if (y == 6) {
        printf("30\n");
    } else if (y == 7) {
        printf("31\n");
    } else if (y == 8) {
        printf("31\n");
    } else if (y == 9) {
        printf("30\n");
    } else if (y == 10) {
        printf("31\n");
    } else if (y == 11) {
        printf("30\n");
    } else if (y == 12) {
        printf("31\n");
    }
    return 0;
}
