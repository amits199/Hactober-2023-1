#include <iostream>
#include <cmath>

int main() {
    double weight, height, bmi;
    
    // Input weight and height from the user
    std::cout << "Enter your weight (in kilograms): ";
    std::cin >> weight;
    
    std::cout << "Enter your height (in meters): ";
    std::cin >> height;
    
    // Calculate BMI
    bmi = weight / (height * height);
    
    // Classify based on BMI
    std::cout << "Your BMI is: " << bmi << std::endl;
    
    if (bmi < 18.5) {
        std::cout << "You are classified as 'Underweight' or 'Skinny'.\n";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        std::cout << "You are classified as 'Normal' or 'Moderate'.\n";
    } else {
        std::cout << "You are classified as 'Overweight' or 'Obese'.\n";
    }
    
    return 0;
}
