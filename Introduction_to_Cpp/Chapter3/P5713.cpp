#include <cstdio>

int main() {
    int n, local_time, luogu_time;
    scanf("%d", &n);
    local_time = n * 5;
    luogu_time = 11 + n * 3;
    if (local_time < luogu_time) {
        printf("Local\n");
    } else {
        printf("Luogu\n");
    }
    return 0;
}
