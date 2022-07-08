#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
char formula[100], sign, ans[20000];
int n, a, b;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> formula;
        if (isalpha(formula[0])) {
            sign = formula[0];
            cin >> a >> b;
        } else {
            a = atoi(formula);
            cin >> b;
        }
        if (sign == 'a') sprintf(ans, "%d+%d=%d", a, b, a + b);
        else if (sign == 'b') sprintf(ans, "%d-%d=%d", a, b, a - b);
        else if (sign == 'c') sprintf(ans, "%d*%d=%d", a, b, a * b);
        cout << ans << endl;
        cout << strlen(ans) << endl;
    }
    return 0;
}
