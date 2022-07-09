#include <cstdio>
#include <algorithm>

using namespace std;
int s[25], n, m, maxsum;

void stat(int a[], int m) {
    int maxscore = 0, minscore = 10, sum = 0;
    for (int i = 0; i < m; i++) {
        maxscore = max(a[i], maxscore);
        minscore = min(a[i], minscore);
        sum += a[i];
    }
    maxsum = max(maxsum, sum - maxscore - minscore);
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%d", &s[j]);
        stat(s, m);
    }
    printf("%.2f", double(maxsum) / (m - 2));
    return 0;
}
