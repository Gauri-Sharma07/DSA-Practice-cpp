#include <iostream>

int main() {
    double hours = -1; // Initialize with a temporary value

    // The loop keeps running as long as hours is NOT 0
    while (hours != 0) {
        std::cout << "\nEnter your planned daily DSA hours (or type 0 to quit): ";
        std::cin >> hours;

        // If the user types 0, break out of the loop immediately
        if (hours == 0) {
            std::cout << "Exiting program. Keep grinding!" << std::endl;
            break; 
        }

        // Logic check inside the loop
        if (hours >= 4.0) {
            std::cout << ">>> Status: Elite Pace! You're crushing it." << std::endl;
        } else if (hours >= 2.0) {
            std::cout << ">>> Status: Solid Pace! Consistency is key." << std::endl;
        } else {
            std::cout << ">>> Status: Rookie Numbers! Try to push for 2+ hours." << std::endl;
        }
    }

    return 0;
}