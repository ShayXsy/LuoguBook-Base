#include <iostream>
#include <algorithm>

using namespace std;
int a[100001];

int main() {
    ios::sync_with_stdio(false);
    int s1, s2, s3, maxn = -2147483647, maxx = -2147483647, appear;
    cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                a[i + j + k]++;
                maxn = max(maxn, i + j + k);
            }
        }
    }
    for (int i = 1; i < maxn; i++) {
        if (a[i] > maxx) {
            maxx = a[i];
            appear = i;
        }
    }
    cout << appear << endl;
    return 0;
}
