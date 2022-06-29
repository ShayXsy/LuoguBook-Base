#include <cstdio>

int main() {
    char a, b, c, d, e, f, g, h, i, j;
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    int check;
    check = (a - '0') * 1 + (b - '0') * 2 + (c - '0') * 3 + (d - '0') * 4 + (e - '0') * 5
            + (f - '0') * 6 + (g - '0') * 7 + (h - '0') * 8 + (i - '0') * 9;
    check %= 11;
    if (j == 'X' && check == 10 || check == j - '0') {
        printf("Right\n");
    } else {
        printf("%c-%c%c%c-%c%c%c%c%c-%c", a, b, c, d, e, f, g, h, i, check == 10 ? 'X': check + '0');
    }
    return 0;
}
