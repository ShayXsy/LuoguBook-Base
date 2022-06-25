#include <cstdio>

using namespace std;

int main() {
    int balance = 100;

    // 买股票
    balance *= 2;
    printf("%d\n", balance);
    // 金融危机
    balance /= 4;
    printf("%d\n", balance);

    return 0;
}
