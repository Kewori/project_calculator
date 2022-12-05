#include "functions.h"
// this is for integer numbers /////////
int sum(const int& firstValue, const int& secondValue) {
    return firstValue + secondValue;
}
int subtract(const int& firstValue, const int& secondValue) {
    return firstValue - secondValue;
}
int multiply(const int& firstValue, const int& secondValue) {
    return firstValue * secondValue;
}
int division(const int& firstValue, const int& secondValue) {
    return firstValue / secondValue;
}
int mod(const int& firstValue, const int& secondValue) {
    return firstValue % secondValue;
}
int power(const int& number, const int& power) {
    int result = 1;
    for (int repeat = 0; repeat < power; repeat++)
    {
        result *= number;
    }
    return result;

}
unsigned long long factorial(const int& number) {
    return (number <= 1) ? 1 : number * factorial(number - 1);
}
////////////////////////////////////////

// this is for double numbers //////////
double sum(const double& firstValue, const double& secondValue) {
    return firstValue + secondValue;
}
double subtract(const double& firstValue, const double& secondValue) {
    return firstValue - secondValue;
}
double multiply(const double& firstValue, const double& secondValue) {
    return firstValue * secondValue;
}
double division(const double& firstValue, const double& secondValue) {
    return firstValue / secondValue;
}
double power(const double& number, const int& power) {
    double result = 1;
    for (int repeat = 0; repeat < power; repeat++)
    {
        result *= number;
    }
    return result;
}
///////////////////////////////////////

Operation chooseOperation() {
    cout << "These are all available operations:\n";
    string menu = "Sum - 0\nSubtract - 1\nMultiply - 2\nDivision - 3\nMod - 4\nExp - 5\n";
    int numberOfOperation;
    cout << "Please, choose one operation\n";
    cin >> numberOfOperation;
    return static_cast<Operation>(numberOfOperation);
}
double applyBinaryOperation(Operation operation, const double& firstValue, const double& secondValue) {
    double(*func[])(const double&, const double&) = { sum, subtract, multiply, division };
    return func[static_cast<int>(operation)](firstValue, secondValue);
}