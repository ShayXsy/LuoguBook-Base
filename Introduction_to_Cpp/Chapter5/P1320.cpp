#include <cstdio>
#include <cstring>
#define LENGTH 300

char a[LENGTH][LENGTH];

int main() {
    scanf("%s", a[1] + 1);
    int n = strlen(a[1] + 1);
    printf("%d ", n);
    for (int i = 2; i <= n; i++)
        scanf("%s", a[i] + 1);
    int cnt = 0;
    bool flag = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != flag + '0') {        // 连续串结束
                printf("%d ", cnt);
                cnt = 1;
                flag = !flag;
            } else {
                cnt++;
            }
        }
    }
    printf("%d", cnt);        // 单独输出最后一个序列长度
    return 0;
}
