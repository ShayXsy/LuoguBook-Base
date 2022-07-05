#include <iostream>

using namespace std;
int artwork[21][21][21];

int main() {
    int w, x, h, q;
    int x1, x2, y1, y2, z1, z2;
    int sum = 0;
    cin >> w >> x >> h;
    cin >> q;
    while (q--) {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                for (int k = z1; k <= z2; k++)
                    artwork[i][j][k] = 1;
    }
    for (int i = 1; i <= w; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= h; k++)
                if (artwork[i][j][k] == 0)
                    sum++;
    cout << sum << endl;
    return 0;
}
