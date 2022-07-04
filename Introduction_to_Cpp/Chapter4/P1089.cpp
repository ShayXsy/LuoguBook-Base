#include <cstdio>

int main() {
    int money = 0, cost, givemom = 0, dm;
    bool flag = true;
    for (int i = 0; i < 12; i++) {
        scanf("%d", &cost);
        money += 300;
        money -= cost;
        if (money < 0) {
            flag = false;
            dm = i + 1;
            break;
        } else {
            givemom += money / 100;
            money %= 100;
        }
    }
    if (flag) {
        money += givemom * 120;
        printf("%d\n", money);
    } else {
        printf("-%d", dm);
    }
    return 0;
}
