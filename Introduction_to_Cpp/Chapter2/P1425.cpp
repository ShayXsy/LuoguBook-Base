#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, m, h;
    cin >> a >> b >> c >> d;
    if (d < b) {
        d += 60;
        m = d - b;
        h = (c - 1) - a;
    } else {
        m = d - b;
        h = c - a;
    }
    printf("%d %d\n", h, m);
    return 0;
}
