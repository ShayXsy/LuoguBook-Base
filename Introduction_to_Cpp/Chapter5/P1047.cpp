#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int l, m, total = 0, tree[10020];
    memset(tree, 0, sizeof(tree));
    cin >> l >> m;
    for (int i = 1; i <= m; i++) {
        int h, t;
        cin >> h >> t;
        for (int j = h; j <= t; j++)
            if (tree[j] == 0)
                tree[j] = 1;
    }
    for (int i = 0; i <= l; i++)
        if (tree[i] == 0)
            total++;
    cout << total << endl;
    return 0;
}
