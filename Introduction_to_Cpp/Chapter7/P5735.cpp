#include <iostream>
#include <iomanip>
#include <cmath>

double sq(double x);

double distance(double x1, double y1, double x2, double y2);

int main() {
    std::ios::sync_with_stdio(false);
    double x1, x2, x3, y1, y2, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double ans = distance(x1, y1, x2, y2);
    ans += distance(x1, y1, x3, y3);
    ans += distance(x2, y2, x3, y3);
    std::cout << std::fixed << std::setprecision(2) << ans << std::endl;
    return 0;
}


double sq(double x) {
    return pow(x, 2);
}


double distance(double x1, double y1, double x2, double y2) {
    return sqrt(sq(x1 - x2) + sq(y1 - y2));
}
