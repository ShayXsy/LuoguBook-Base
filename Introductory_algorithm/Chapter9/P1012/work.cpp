#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int n;
string a[120];

bool cmp(string a, string b) {
    return a + b > b + a;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
        cout << a[i];
    return 0;
}
