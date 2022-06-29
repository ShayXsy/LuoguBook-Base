#include <cstdio>

int a[10];

int main() {
    int tall, total = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &tall);
    for (int i = 0; i < 10; i++) {
        if ((tall + 30) >= a[i]) {
            total++;
        }
    }
    printf("%d\n", total);
    return 0;
}
