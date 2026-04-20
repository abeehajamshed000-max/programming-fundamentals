#include <iostream>
#include <iomanip>
using namespace std;
float calculateSalary(float base, int score, int experience) {
    float bonusPercent = 0;


    if (score >= 90)
        bonusPercent = 20;
    else if (score >= 75 && score <= 89)
        bonusPercent = 10;
    else
        bonusPercent = 5;


    if (experience >= 5)
        bonusPercent = bonusPercent + 5;

    float totalBonus = base * bonusPercent / 100;
    float finalSalary = base + totalBonus;
    return finalSalary;
}

int main() {
    float baseSalary;
    int score, experience;

    cout << "Enter base, score and experience in years:" << endl;
    cin >> baseSalary;
    cin >> score;
    cin >> experience;

    float finalSalary = calculateSalary(baseSalary, score, experience);

    cout << "Final Salary: " << fixed << setprecision(0) << finalSalary << endl;

    return 0;
}