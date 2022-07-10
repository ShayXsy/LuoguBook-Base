#include <iostream>

using namespace std;
struct node {
    string name;
    int age{};
    double lastYearNOIPScore{};
};
int n;

int main() {
    cin >> n;
    struct node a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].age >> a[i].lastYearNOIPScore;
    for (int i = 0; i < n; i++) {
        a[i].age += 1;
        a[i].lastYearNOIPScore *= 1.2;
        if (a[i].lastYearNOIPScore > 600) a[i].lastYearNOIPScore = 600;
        cout << a[i].name << " " << a[i].age << " " << a[i].lastYearNOIPScore << endl;
    }
    return 0;
}
