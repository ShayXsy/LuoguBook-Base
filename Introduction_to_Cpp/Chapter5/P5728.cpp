#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[3][n], ans = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[0][i] >> a[1][i] >> a[2][i];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if ((abs(a[0][i] - a[0][j]) <= 5)
            && (abs(a[1][i] - a[1][j]) <= 5)
            && (abs(a[2][i] - a[2][j]) <= 5)
            && (abs((a[0][i] + a[1][i] + a[2][i]) - (a[0][j] + a[1][j] + a[2][j])) <= 10)
            )
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
