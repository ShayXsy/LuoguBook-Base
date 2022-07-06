#include <iostream>

using namespace std;

int main() {
    int tubes[10][8] = {    // 数码i的第j个显示管是什么
            {6, 0, 1, 2, 4, 5, 6},
            {2, 2, 5},
            {5, 0, 2, 3, 4, 6},
            {5, 0, 2, 3, 5, 6},       // 0123
            {4, 1, 2, 3, 5},
            {5, 0, 1, 3, 5, 6},
            {6, 0, 1, 3, 4, 5, 6},
            {3, 0, 2, 5},       // 4567
            {7, 0, 1, 2, 3, 4, 5, 6},
            {6, 0, 1, 2, 3, 5, 6},        // 89
    };
    int dot[7][3][2] = {       // 每个显示管的3个点相对与左上角的坐标偏移
            {{0, 0}, {0, 1}, {0, 2}},
            {{0, 0}, {1, 0}, {2, 0}},
            {{0, 2}, {1, 2}, {2, 2}},
            {{2, 0}, {2, 1}, {2, 2}},
            {{2, 0}, {3, 0}, {4, 0}},
            {{2, 2}, {3, 2}, {4, 2}},
            {{4, 0}, {4, 1}, {4, 2}},
    };
    char num[110], out[5][500];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4 * n - 1; j++)
            out[i][j] = '.';
    for (int i = 0; i < n; i++) {       // 处理每个字符
        int basex = 0, basey = i * 4, digit = num[i] - '0';
        /* basex和basey是为每个数字左上角的坐标值，digit是正在处理哪一个数码(转换成int) */
        for (int j = 1; j <= tubes[digit][0]; j++) {        // 处理每个要被点亮的显示管
            int tubenum = tubes[digit][j];
            out[basex + dot[tubenum][0][0]][basey + dot[tubenum][0][1]] = 'X';
            out[basex + dot[tubenum][1][0]][basey + dot[tubenum][1][1]] = 'X';
            out[basex + dot[tubenum][2][0]][basey + dot[tubenum][2][1]] = 'X';
        }
    }
    for (int i = 0; i < 5; i++, cout << endl)
        for (int j = 0; j < 4 * n - 1; j++)
            cout << out[i][j];
    return 0;
}
