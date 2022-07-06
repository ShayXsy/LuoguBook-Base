#include <iostream>

using namespace std;

int main() {
    int n, a[100], select[100], memory = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        select[i] = 2;       // 去重
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < n; k++) {       // 重复测试是否已经统计了全部数组
                if (a[k] == a[i] + a[j] && select[k] != 1) {         // 判定是否为所有组合的和。使用select数组
                    memory++;
                    select[k] = 1;       // 判断是否统计过
                }
            }
        }
    }
    cout << memory << endl;
    return 0;
}
