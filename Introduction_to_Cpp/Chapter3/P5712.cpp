#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    if (x == 0) printf("Today, I ate 0 apple.\n");
    else if (x == 1) printf("Today, I ate 1 apple.\n");
    else if (x >= 2) printf("Today, I ate %d apples.\n", x);
    return 0;
}
