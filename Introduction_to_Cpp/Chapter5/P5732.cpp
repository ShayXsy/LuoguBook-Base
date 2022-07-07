#include <iostream>

using namespace std;
long long a[200][200];

int main() {
    ios::sync_with_stdio(false);
    int n;
    scanf("%d", &n);
    a[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
