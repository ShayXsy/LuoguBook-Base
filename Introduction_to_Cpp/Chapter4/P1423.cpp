#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double x, s = 0;
    double n = 2;
    int steps = 0;
    cin >> x;
    do {
        s += n;
        n *= 0.98;
        steps++;
    } while (s < x);
    cout << steps << endl;
    return 0;
}
