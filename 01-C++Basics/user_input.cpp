#include <iostream>

int main() {
    // 1. Declare the variables with clean, text-based names
    int enteredAge;
    double dailyCodingHours;

    // 2. Ask the user for their age
    std::cout << "Enter your current age: ";
    std::cin >> enteredAge;

    // 3. Ask for their daily coding target
    std::cout << "How many hours will you dedicate to DSA daily? ";
    std::cin >> dailyCodingHours;

    // 4. Output the calculations dynamically
    std::cout << "\n--- System Status Updated ---" << std::endl;
    std::cout << "Current Age: " << enteredAge << " years old." << std::endl;
    std::cout << "Target Shift: " << dailyCodingHours << " hours of deep focus daily." << std::endl;
    std::cout << "Total hours in a 3.5-month summer sprint: " << (dailyCodingHours * 105) << " hours!" << std::endl;

    return 0;
}