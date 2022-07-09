#include <iostream>

struct node {
    int studentID, academicPerformance, qualityDevelopmentAchievement;
    double compositeScore;
};
int n;

bool isItExcellent(int a, int b, double x);

int main() {
    std::cin >> n;
    struct node a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i].studentID >> a[i].academicPerformance >> a[i].qualityDevelopmentAchievement;
        a[i].compositeScore = a[i].academicPerformance * 0.7 + a[i].qualityDevelopmentAchievement * 0.3;
    }
    for (int i = 0; i < n; i++) {
        if (isItExcellent(a[i].academicPerformance, a[i].qualityDevelopmentAchievement, a[i].compositeScore)) std::cout << "Excellent\n";
        else std::cout << "Not excellent\n";
    }
    return 0;
}

bool isItExcellent(int a, int b, double x) {
     if (a + b > 140 && x >= 80) return true;
     else return false;
}
