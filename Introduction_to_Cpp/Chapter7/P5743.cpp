#include <iostream>

int main() {
    int n, ans = 1;
    std::cin >> n;
    for (int i = 1; i < n; i++) {
        ans += 1;
        ans *= 2;
    }
    std::cout << ans << std::endl;
    return 0;
}
