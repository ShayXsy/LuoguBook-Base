#include <cstdio>

using namespace std;

int main() {
    char a, b, c, t;
    scanf("%c %c %c", &a, &b, &c);
    t = a;
    a = b;
    b = c;
    c = t;
    printf("%c %c %c\n", a, b, c);
    return 0;
}
