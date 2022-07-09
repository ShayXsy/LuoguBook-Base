#include <cstdio>
#include <cmath>

using namespace std;
int n;

int isPrime(int x);

int main() {
    scanf("%d", &n);
    for (int i = 4; i <= n; i += 2) {
        for (int j = 2; j <= i / 2; j++) {      // 从最小素数开始
            int k = i - j;
            if (isPrime(j) && isPrime(k)) {
                printf("%d=%d+%d\n", i, j, k);
                break;
            }
        }
    }
    return 0;
}

int isPrime(int x) {
    int m = (int) sqrt(x);
    for (int i = 2; i <= m; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
