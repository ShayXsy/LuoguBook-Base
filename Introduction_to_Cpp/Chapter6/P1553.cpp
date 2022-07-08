#include <iostream>
#include <algorithm>
#include <string>

std::string myReverse(std::string s);

std::string deleteTail(std::string s);

int main() {
    std::string formula;
    std::cin >> formula;
    if (formula.back() == '%') {
        std::cout << myReverse(formula.substr(0, formula.size() - 1)) << "%" << std::endl;
        return 0;
    }
    for (auto i: formula) {
        std::string front, back;
        if (i == '/') {
            front = formula.substr(0, formula.find('/'));
            back = formula.substr(formula.find('/') + 1);
            std::cout << myReverse(front) << "/" << myReverse(back) << std::endl;
            return 0;
        }
        if (i == '.') {
            front = formula.substr(0, formula.find('.'));
            back = formula.substr(formula.find('.') + 1);
            std::cout << myReverse(front) << "." << deleteTail(myReverse(back)) << std::endl;
            return 0;
        }
    }
    // 不在所有判断中的最后一种可能性——正整数
    std::cout << myReverse(formula);
    return 0;
}


std::string myReverse(std::string s) {
    int oCount = 0;
    std::reverse(s.begin(), s.end());
    for (auto i: s) {
        if (i == 48) ++oCount;
        else break;
    }
    s.erase(s.begin(), s.begin() + oCount);
    return (!s.empty() ? s : "0");          // 特判是否为空
}


std::string deleteTail(std::string s) {
    int oCount = 0;
    for (auto i = s.size() - 1; i >= 0; --i) {
        if (s[i] == 48) ++oCount;
        else break;
    }
    s.erase(s.end() - oCount, s.end());
    return (!s.empty() ? s : "0");          // 同上
}
