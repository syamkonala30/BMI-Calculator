#include <iostream>

using namespace std;
float CalculateBMI(float h, float w) {
    float SqrtOfHeight = h * h;
    float BMI = w / SqrtOfHeight;
    return BMI;
}
int main() {
    float height;
    float weight;
    cout << "Please enter your height in meters: ";
    cin >> height;
    cout << "please enter your weight in kg: ";
    cin >> weight;
    float BMI = CalculateBMI(height, weight);
    cout << "Your BMI is " << BMI << "\n";
    if (BMI < 18.5) {
        cout << "You are considered underweight";
    }
    else if (BMI > 18.5 & BMI <= 25) {
        cout << "You are in the normal BMI range";
    }
    else if (BMI > 25 & BMI < 30) {
        cout << "You are considered overweight";
    }
    else if (BMI > 30) {
        cout << "You are considered obese";
    }
    return 0;
}
