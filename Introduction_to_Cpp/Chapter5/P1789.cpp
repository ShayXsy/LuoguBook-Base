#include <iostream>
#include <cmath>

using namespace std;
int a[150][150];

int main() {
    int n, m, k, x, y, ans = 0;
    cin >> n >> m >> k;
    // 火把
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        for (int j = abs(x - 1); j <= abs(x + 1); j++)
            for (int z = abs(y - 1); z <= abs(y + 1); z++)
                a[j][z] = 1;
        a[abs(x - 2)][y] = 1, a[abs(x + 2)][y] = 1, a[x][abs(y - 2)] = 1, a[x][abs(y + 2)] = 1;
    }
    // 萤石
    for (int i = 1; i <= k; i++) {
        cin >> x >> y;
        for (int j = abs(x - 2); j <= abs(x + 2); j++)
            for (int z = abs(y - 2); z <= abs(y + 2); z++)
                a[j][z] = 1;
    }
    // 搜索不亮的地方
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 0) ans++;
    cout << ans << endl;
    return 0;
}