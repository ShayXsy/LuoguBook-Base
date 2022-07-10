#include <iostream>
#include <cmath>

long long s = 0, n = 0, t = 0;

int main() {
    while (std::cin >> t) {
        s += t;
        n++;
    }
    std::cout << (long long) (s * pow(2, n - 1));
    return 0;
}
