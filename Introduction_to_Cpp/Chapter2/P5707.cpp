#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double s, v;
    int timeg;
    timeg = 60 * 24 + 8 * 60;
    scanf("%lf %lf", &s, &v);
    int ts = ceil(s / v) + 10;
    timeg -= ts;
    if (timeg > 24 * 60) {
        timeg -= 24 * 60;
    }
    int m = timeg % 60;
    int h = timeg / 60;
    if (h < 10) {
        if (m < 10) {
            cout << "0" << h << ":0" << m << endl;
        } else {
            cout << "0" << h << ":" << m << endl;
        }
    } else {
        if (m < 10) {
            cout << h << ":0" << m << endl;
        } else {
            cout << h << ":" << m << endl;
        }
    }
    return 0;
}
