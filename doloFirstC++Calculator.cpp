#include <iostream>
#include <string>
#include <cmath> // For the power operation

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division with error handling
double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return a / b;
}

// Function to perform power operation
double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    std::cout << "Dolo Calculator\n";
    char operation;
    double num1, num2, result;

    // Display a menu for the user to choose an operation
    std::cout << "Choose an operation:" << std::endl;
    std::cout << "1. Addition (+)" << std::endl;
    std::cout << "2. Subtraction (-)" << std::endl;
    std::cout << "3. Multiplication (*)" << std::endl;
    std::cout << "4. Division (/)" << std::endl;
    std::cout << "5. Power (^)" << std::endl;
    std::cout << "Enter the corresponding number: ";
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            operation = '+';
            break;
        case 2:
            operation = '-';
            break;
        case 3:
            operation = '*';
            break;
        case 4:
            operation = '/';
            break;
        case 5:
            operation = '^';
            break;
        default:
            std::cerr << "Invalid choice. Please enter a valid number (1-5)." << std::endl;
            return 1;
    }

    // Get the numbers from the user
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    try {
        // Perform the requested operation
        switch (operation) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            case '^':
                result = power(num1, num2);
                break;
        }

        // Display the result
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
