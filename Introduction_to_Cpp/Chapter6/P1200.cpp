#include <iostream>

int nums[26 + 1] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
std::string hx;
std::string dw;
int hxn = 1, dwn = 1;

int main() {
    std::cin >> hx;
    std::cin >> dw;
    for (int i = 0; i < hx.size(); i++) {
        char symbol = hx[i];
        hxn *= nums[symbol - '@'];
    }
    for (int i = 0; i < dw.size(); i++) {
        char symbol = dw[i];
        dwn *= nums[symbol - '@'];
    }
    if (hxn % 47 == dwn % 47) std::cout << "GO" << std::endl;
    else std::cout << "STAY" << std::endl;
    return 0;
}
