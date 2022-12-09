//#include "functions.h"
//template<typename T>
//T sum(const T& firstValue, const T& secondValue) {
//    return firstValue + secondValue;
//}
//template<typename T>
//T subtract(const T& firstValue, const T& secondValue) {
//    return firstValue - secondValue;
//}
//template<typename T>
//T multiply(const T& firstValue, const T& secondValue) {
//    return firstValue * secondValue;
//}
//template<typename T>
//T division(const T& firstValue, const T& secondValue) {
//    return firstValue / secondValue;
//}
//int mod(const int& firstValue, const int& secondValue) {
//    return firstValue % secondValue;
//}
//template<typename T>
//T power(const int& number, const int& power) {
//    int result = 1;
//    for (int repeat = 0; repeat < power; repeat++)
//    {
//        result *= number;
//    }
//    return result;
//
//}
//unsigned long long factorial(const int& number) {
//    return (number <= 1) ? 1 : number * factorial(number - 1);
//}
//double radical(const int number, const int pow) {
//    int multer = 1;
//    for (; power(multer, pow) < number; multer++) {}
//    double number_ = static_cast<double>(number) / power(multer, pow) - 1;
//    if (number_ == 0.0) {
//        return multer;
//    }
//    int denom = 1;
//    double res = 1;
//    double pseudo_mu = 1.0 / pow;
//    double mu = pseudo_mu;
//
//    for (int i = 1; i < 10; i++)
//    {
//        res += (mu * number_) / factorial(denom);
//        denom++;
//        pseudo_mu -= 1;
//        mu *= pseudo_mu;
//        number_ *= number_;
//    }
//    res *= multer;
//    return res;
//}
////double sqrt(const int number) {
////    double L = 0, R = double(number);
////    double M = (L + R) / 2;
////    while (R - L > 0.0000001) {
////        if (M * M <= number) {
////            L = M;
////        }
////        else {
////            R = M;
////        }
////        M = (R + L) / 2;
////    }
////    return M;
////}
//////////////////////////////////////////
//
//// this is for double numbers //////////
//double sum(const double& firstValue, const double& secondValue) {
//    return firstValue + secondValue;
//}
//double subtract(const double& firstValue, const double& secondValue) {
//    return firstValue - secondValue;
//}
//double multiply(const double& firstValue, const double& secondValue) {
//    return firstValue * secondValue;
//}
//double division(const double& firstValue, const double& secondValue) {
//    return firstValue / secondValue;
//}
//double power(const double& number, const int& power) {
//    double result = 1;
//    for (int repeat = 0; repeat < power; repeat++)
//    {
//        result *= number;
//    }
//    return result;
//}
/////////////////////////////////////////
//
//Operation chooseOperation() {
//    cout << "These are all available operations:\n";
//    string menu = "Sum - 0\nSubtract - 1\nMultiply - 2\nDivision - 3\nMod - 4\nExp - 5\n";
//    int numberOfOperation;
//    cout << "Please, choose one operation\n";
//    cin >> numberOfOperation;
//    return static_cast<Operation>(numberOfOperation);
//}
//double applyBinaryOperation(Operation operation, const double& firstValue, const double& secondValue) {
//    double(*func[])(const double&, const double&) = { sum, subtract, multiply, division };
//    return func[static_cast<int>(operation)](firstValue, secondValue);
//}