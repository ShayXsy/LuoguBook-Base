#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a * 10 + b;
    int total = floor(sum / 19);
    printf("%d\n", total);
    return 0;
}
