#include <cstdio>

int main() {
    int n, t = 1, a;
    scanf("%d", &n);
    a = n;  // 因为是直角三角形，行数等于列数
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= a; j++) {
            printf("%02d", t);
            t++;
        }
        a--;        // 输出完一行删掉一列
        printf("\n");
    }
    return 0;
}
