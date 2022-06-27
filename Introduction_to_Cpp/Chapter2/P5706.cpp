#include <cstdio>

using namespace std;

int main() {
    double v, pv;
    int cups, pnum;
    scanf("%lf %d", &v, &pnum);
    pv = v / pnum;
    cups = pnum * 2;
    printf("%.3lf\n%d\n", pv, cups);
    return 0;
}
