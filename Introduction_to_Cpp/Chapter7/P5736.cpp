#include <iostream>

int a[100], n;

bool isPrime(int x);

int main() {
    std::cin >> n;
    for (auto i = 0; i < n; i++)
        std::cin >> a[i];
    for (auto i = 0; i < n; i++)
        if (isPrime(a[i]))
            std::cout << a[i] << " ";
    std::cout << std::endl;
    return 0;
}


bool isPrime(int x) {
    if (x == 0 || x == 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
