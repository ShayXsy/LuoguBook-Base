#include<iostream>

using namespace std;

int calc(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;
    cout << calc(num) << endl;
    return 0;
}
