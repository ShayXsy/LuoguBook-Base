#include <cstdio>
#define forloop(i, j, k) for (int i = j; i <= k; i++)

int main() {
    double a, t;
    int w, z, n, x, answer = 0;
    scanf("%d", &n);
    forloop(w, 1, n) {
        scanf("%lf %lf", &a, &t);
        forloop(z, 1, t) {
            answer ^= int(z * a);
        }
    }
    printf("%d\n", answer);
    return 0;
}
