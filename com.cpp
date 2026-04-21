#include <iostream>

int main() {
    int num = 32; // Example 2-digit number

    // Extract the individual digits
    int first_digit = num / 10;
    int second_digit = num % 10;

    // Output the original number and its digits
    std::cout << "The 2-digit number is: " << num << std::endl;
    std::cout << "The first digit is: " << first_digit << std::endl;
    std::cout << "The second digit is: " << second_digit << std::endl;

    return 0;
}
