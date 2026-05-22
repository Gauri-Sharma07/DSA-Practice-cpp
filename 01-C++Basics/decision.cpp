#include <iostream>

int main() {
    double hours;
    std::cout << "Enter your planned daily DSA coding hours: ";
    std::cin >> hours;

    if (hours >= 4.0) {
        std::cout << "Absolute beast mode! Tracking toward elite status." << std::endl;
    } else if (hours >= 2.0) {
        std::cout << "Solid consistency. This builds real momentum." << std::endl;
    } else {
        std::cout << "Every bit counts, but try to push for 2+ hours to clear deep concepts!" << std::endl;
    }

    return 0;
}