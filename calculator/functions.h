#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;

enum Operation {
    Sum,
    Sub,
    Mult,
    Division,
    Mod,
    Exp
};
#include "functions.h"
template<typename T>
T sum(const T& firstValue, const T& secondValue) {
    return firstValue + secondValue;
}
template<typename T>
T subtract(const T& firstValue, const T& secondValue) {
    return firstValue - secondValue;
}
template<typename T>
T multiply(const T& firstValue, const T& secondValue) {
    return firstValue * secondValue;
}
template<typename T>
T division(const T& firstValue, const T& secondValue) {
    return firstValue / secondValue;
}
int mod(const int& firstValue, const int& secondValue) {
    return firstValue % secondValue;
}
template<typename T>
T power(const T& number, const int& power) {
    T result = 1;
    for (int repeat = 0; repeat < power; repeat++)
    {
        result *= number;
    }
    return result;

}
unsigned long long factorial(const int& number) {
    return (number <= 1) ? 1 : number * factorial(number - 1);
}
template <typename T>
double radical(const T number, const int pow) {
    int multer = 1;
    for (; power(multer, pow) < number; multer++) {}
    double number_ = static_cast<double>(number) / power(multer, pow) - 1;
    if (number_ == 0.0) {
        return multer;
    }
    int denom = 1;
    double res = 1;
    double pseudo_mu = 1.0 / pow;
    double mu = pseudo_mu;

    for (int i = 1; i < 40; i++)
    {
        res += (mu * number_) / factorial(denom);
        denom++;
        pseudo_mu -= 1;
        mu *= pseudo_mu;
        number_ *= number_;
    }
    res *= multer;
    return res;
}
//double sqrt(const int number) {
//    double L = 0, R = double(number);
//    double M = (L + R) / 2;
//    while (R - L > 0.0000001) {
//        if (M * M <= number) {
//            L = M;
//        }
//        else {
//            R = M;
//        }
//        M = (R + L) / 2;
//    }
//    return M;
//}
template <typename T>
double cosDeg(const T degree) {
    double rad = degree * 3.1415926535 / 180;

    double res = 0;
    for (int k = 0; k <= 16; k+=2) {
        res += power(-1, k) * power(rad, 2 * k) / factorial(2 * k);
    }
    return res;
}

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




double applyUnaryOperation(Operation, const double&);
double applyBinaryOperation(Operation, const double&, const double&);



Operation chooseOperation();


#endif FUNCTIONS_H
