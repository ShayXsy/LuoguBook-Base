#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    }
    if (T == 2) {
        cout << 6 << " " << 4 << endl;
    }
    if (T == 3) {
        cout << 3 << endl << 12 << endl << 2 << endl;
    }
    if (T == 4) {
        cout << 166.666667 << endl;
    }
    if (T == 5) {
        cout << 15 << endl;
    }
    if (T == 6) {
        cout << 10.816653826391967879357663802411 << endl;
    }
    if (T == 7) {
        cout << 110 << endl << 90 << endl << 0 << endl;
    }
    if (T == 8) {
        cout << 31.41593 << endl << 78.539825 << endl << 523.59883333333333333333333333333 << endl;
    }
    if (T == 9) {
        cout << 22 << endl;
    }
    if (T == 10) {
        cout << 9 << endl;
    }
    if (T == 11) {
        cout << 33.3333333333 << endl;
    }
    if (T == 12) {
        cout << 13 << endl << 'R' << endl;
    }
    if (T == 13) {
        cout << 16 << endl;
    }
    if (T == 14) {
        for (int i = 1; i <= 110; i++) {
            int s = 120 - i;
            int ans = s * i;
            if (ans == 3500) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
