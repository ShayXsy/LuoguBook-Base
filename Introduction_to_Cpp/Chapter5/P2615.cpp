#include <iostream>
#include <cmath>

using namespace std;
int n, g[40][40], x, y;

int main() {
    cin >> n;
    g[1][n / 2 + 1] = 1;
    x = 1;
    y = n / 2 + 1;
    for (int i = 2; i <= pow(n, 2); i++) {
        if (x == 1 && y != n)        // 第一行但不是最后一列
            g[n][y + 1] = i, x = n, y++;
        else if (y == n && x != 1)   //最后一列但不是最后一行
            g[x - 1][1] = i, x--, y = 1;
        else if (x == 1 && y == n)   // 第一行最后一列
            g[2][n] = i, x = 2;
        else if (x != 1 && y != n) {  // 不在第一行，也不在最后一列
            if (g[x - 1][y + 1] == 0)   // 右上方未填数
                g[x - 1][y + 1] = i, x--, y++;
            else
                g[x + 1][y] = i, x++;
            continue;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
    return 0;
}
