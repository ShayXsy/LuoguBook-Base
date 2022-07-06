#include <iostream>

using namespace std;
int times[10];

int main() {
    ios::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
        for (int j = i; j; j /= 10)
            times[j % 10]++;
    for (int i = 0; i < 10; i++)
        printf("%d ", times[i]);
    return 0;
}
