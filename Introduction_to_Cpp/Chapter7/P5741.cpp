#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
struct node {
    string name;
    int chineseScore{}, mathScore{}, englishScore{}, totalScore{};
} a[1005];
int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].name >> a[i].chineseScore >> a[i].mathScore >> a[i].englishScore;
        a[i].totalScore = a[i].chineseScore + a[i].mathScore + a[i].englishScore;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (
                (abs(a[i].chineseScore - a[j].chineseScore) <= 5) &&
                (abs(a[i].mathScore - a[j].mathScore) <= 5) &&
                (abs(a[i].englishScore - a[j].englishScore) <= 5) &&
                (abs(a[i].totalScore - a[j].totalScore) <= 10)
            )
            cout << a[i].name << " " << a[j].name << endl;
    return 0;
}
