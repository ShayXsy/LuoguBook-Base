#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, x, b, sum = 0;
    cin >> n >> x;
    int a[n];
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
    for (int i = 1; i <= n; i++) {
        b = i;
        while (b != 0) {
            int c = b % 10;
            b /= 10;
            if (c == x) {
                sum++;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
