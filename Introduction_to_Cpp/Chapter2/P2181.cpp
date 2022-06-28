#include <cstdio>

using namespace std;
unsigned long long n, ans;

int main() {
    scanf("%lld", &n);
    ans = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    printf("%lld\n", ans);
    return 0;
}
