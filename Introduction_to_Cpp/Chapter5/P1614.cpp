#include <iostream>
#include <algorithm>

using namespace std;
int a[10001], b[10001];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= n - m; i++) {
        for (int k = i; k < i + m; k++) {
            b[i] = b[i] + a[k];
        }
    }
    sort(b, b + n - m);
    cout << b[0];
    return 0;
}
