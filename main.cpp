#include <iostream>

int main() {
    std::cout << "Think of a number in your mind (X)." << std::endl;
    std::cout << "Now, follow these steps:" << std::endl;
    std::cout << "1. Add 5 to your number." << std::endl;
    std::cout << "2. Multiply the result by 2." << std::endl;
    std::cout << "3. Subtract 4 from the result." << std::endl;
    std::cout << "4. Divide the result by 2." << std::endl;
    std::cout << "Now, please tell me the final result: ";

    double finalResult;
    std::cin >> finalResult;

    // Reverse the operations to find the original number
    double originalNumber = (finalResult * 2 + 4) / 2 - 5;

    std::cout << "The number you thought of was: " << originalNumber << std::endl;

    return 0;
}