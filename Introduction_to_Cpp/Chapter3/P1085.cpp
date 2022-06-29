#include <cstdio>

int sk[7];
int mm[7];
int time[7];
int max = 0, unhappyday = 0;

int main() {
    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &sk[i], &mm[i]);
    }
    for (int i = 0; i < 7; i++) {
        time[i] = sk[i] + mm[i];
    }
    for (int i = 0; i < 7; i++) {
        if (time[i] > max && time[i] > 8) {
            max = time[i];
            unhappyday = i + 1;
        }
    }
    printf("%d\n", unhappyday);
    return 0;
}
