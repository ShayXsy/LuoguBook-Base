#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    bool tof;
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        tof = true;
    } else {
        tof = false;
    }
    cout << tof << endl;
    return 0;
}
