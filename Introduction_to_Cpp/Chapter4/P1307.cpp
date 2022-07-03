#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        printf("-");
        n = -n;
    }
    if (n % 10 == 0) n /= 10;
    int newnum = 0;
    while (n != 0) {
        int j = n % 10;
        newnum = newnum * 10 + j;
        n /= 10;
    }
    printf("%d\n", newnum);
    return 0;
}
