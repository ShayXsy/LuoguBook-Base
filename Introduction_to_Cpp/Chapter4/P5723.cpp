#include <iostream>

using namespace std;

int main() {
    int L, load = 0, ans = 0;
    cin >> L;
    for (int i = 2;; i++) {
        int is_prime = 1; // 假设它是质数
        for (int j = 2; j * j <= i; j++) // 判断是否为质数
            if (i % j == 0) {
                is_prime = 0;  // 它不是质数
                break; // 跳出本轮循环
            }
        if (!is_prime) continue; // 如果它是质数，那么继续下一轮循环
        if (i + load > L) break; // 如果超过承重量，那么跳出本轮循环
        cout << i << endl;
        ans++;
        load += i;
    }
    cout << ans;
    return 0;
}
