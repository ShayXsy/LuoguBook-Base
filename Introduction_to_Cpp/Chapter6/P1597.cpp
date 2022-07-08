#include <cstdio>

using namespace std;
int a[3];
char x, y;

int main() {
    while (scanf("%c:=%c;", &x, &y) == 2)
        a[x - 'a'] = y >= '0' && y <= '9' ? y - '0' : a[y - 'a'];
    printf("%d %d %d", a[0], a[1], a[2]);
}
