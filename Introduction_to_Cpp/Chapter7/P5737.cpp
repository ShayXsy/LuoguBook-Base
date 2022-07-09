#include <iostream>

using namespace std;

void init();

void doit();

void output();

int x, y, ans[500], cnt;

int main() {
    init();
    doit();
    output();
    return 0;
}

void init() {
    cin >> x >> y;
}

void doit() {
    for (int i = x; i <= y; i++)
        if (!(i % 400) || !(i % 4) && i % 100)
            ans[cnt++] = i;
}

void output() {
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << ans[i] << " ";
    cout << endl;
}
