#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    double price;
    scanf("%d", &n);
    price = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
    printf("%.2lf\n", price);
    return 0;
}
