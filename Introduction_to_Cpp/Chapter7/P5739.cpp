#include <iostream>

int n;

long long factorial(int x);

int main() {
    std::cin >> n;
    std::cout << factorial(n) << std::endl;
    return 0;
}

long long factorial(int x) {
    if (x == 1) return 1;
    return x * factorial(x - 1);
}
