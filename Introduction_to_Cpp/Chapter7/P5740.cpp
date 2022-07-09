#include <iostream>
#include <string>

struct student {
    std::string name;
    int chinese{}, math{}, english{};
} a, ans;

int main() {
    int n;
    std::cin >> n;
    ans.chinese = INT8_MIN, ans.math = INT8_MIN, ans.english = INT8_MIN;
    for (int i = 1; i <= n; i++) {
        std::cin >> a.name >> a.chinese >> a.math >> a.english;
        if (a.chinese + a.math + a.english > ans.chinese + ans.math + ans.english) ans = a;
    }
    std::cout << ans.name << " " << ans.chinese << " " << ans.math << " " << ans.english << std::endl;
    return 0;
}
