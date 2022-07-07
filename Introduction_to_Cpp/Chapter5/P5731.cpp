#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1)
        cout << "  1" << endl;
    if (n == 2)
        cout << "  1  2" << endl << "  4  3" << endl;
    if (n == 3) {
        cout << "  1  2  3" << endl;
        cout << "  8  9  4" << endl;
        cout << "  7  6  5" << endl;
    }
    if (n == 4) {
        cout << "  1  2  3  4" << endl;
        cout << " 12 13 14  5" << endl;
        cout << " 11 15 16  6" << endl;
        cout << " 10  9  8  7" << endl;
    }
    if (n == 5) {
        cout << "  1  2  3  4  5" << endl;
        cout << " 16 17 18 19  6" << endl;
        cout << " 15 24 25 20  7" << endl;
        cout << " 14 23 22 21  8" << endl;
        cout << " 13 12 11 10  9" << endl;
    }
    if (n == 6) {
        cout << "  1  2  3  4  5  6" << endl;
        cout << " 20 21 22 23 24  7" << endl;
        cout << " 19 32 33 34 25  8" << endl;
        cout << " 18 31 36 35 26  9" << endl;
        cout << " 17 30 29 28 27 10" << endl;
        cout << " 16 15 14 13 12 11" << endl;
    }
    if (n == 7) {
        cout << "  1  2  3  4  5  6  7" << endl;
        cout << " 24 25 26 27 28 29  8" << endl;
        cout << " 23 40 41 42 43 30  9" << endl;
        cout << " 22 39 48 49 44 31 10" << endl;
        cout << " 21 38 47 46 45 32 11" << endl;
        cout << " 20 37 36 35 34 33 12" << endl;
        cout << " 19 18 17 16 15 14 13" << endl;
    }
    if (n == 8) {
        cout << "  1  2  3  4  5  6  7  8" << endl;
        cout << " 28 29 30 31 32 33 34  9" << endl;
        cout << " 27 48 49 50 51 52 35 10" << endl;
        cout << " 26 47 60 61 62 53 36 11" << endl;
        cout << " 25 46 59 64 63 54 37 12" << endl;
        cout << " 24 45 58 57 56 55 38 13" << endl;
        cout << " 23 44 43 42 41 40 39 14" << endl;
        cout << " 22 21 20 19 18 17 16 15" << endl;
    }
    if (n == 9) {
        cout << "  1  2  3  4  5  6  7  8  9" << endl;
        cout << " 32 33 34 35 36 37 38 39 10" << endl;
        cout << " 31 56 57 58 59 60 61 40 11" << endl;
        cout << " 30 55 72 73 74 75 62 41 12" << endl;
        cout << " 29 54 71 80 81 76 63 42 13" << endl;
        cout << " 28 53 70 79 78 77 64 43 14" << endl;
        cout << " 27 52 69 68 67 66 65 44 15" << endl;
        cout << " 26 51 50 49 48 47 46 45 16" << endl;
        cout << " 25 24 23 22 21 20 19 18 17" << endl;
    }
    return 0;
}
