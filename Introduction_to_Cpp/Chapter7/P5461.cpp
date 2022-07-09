#include <cstdio>

using namespace std;
int a[1050][1050], n;

void cal(int x, int y, int n) {
    if (n == 0) a[x][y] = 1;
    else {
        cal(x + (1 << n - 1), y, n - 1); // 右上方矩阵
        cal(x, y + (1 << n - 1), n - 1); // 左下角矩阵
        cal(x + (1 << n - 1), y + (1 << n - 1), n - 1); // 右下角
    }
}

int main() {
    int n;
    scanf("%d", &n);
    cal(0, 0, n);
    for (int i = 0; i < 1 << n; i++)
        for (int j = 0; j < 1 << n; j++)
            printf("%d%c", a[i][j], j == (1 << n) - 1 ? '\n' : ' ');
    return 0;
}
