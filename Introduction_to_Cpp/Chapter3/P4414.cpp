#include <algorithm>
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a[3];
    string str;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    cin >> str;
    std::sort(a, a + 3);
    if (str == "ABC") printf("%d %d %d", a[0], a[1], a[2]);
    if (str == "ACB") printf("%d %d %d", a[0], a[2], a[1]);
    if (str == "BAC") printf("%d %d %d", a[1], a[0], a[2]);
    if (str == "BCA") printf("%d %d %d", a[1], a[2], a[0]);
    if (str == "CAB") printf("%d %d %d", a[2], a[0], a[1]);
    if (str == "CBA") printf("%d %d %d", a[2], a[1], a[0]);
    return 0;
}
