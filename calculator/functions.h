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

int sum(const int&, const int&);
int subtract(const int&, const int&);
int multiply(const int&, const int&);
int division(const int&, const int&);
int mod(const int&, const int&);
int power(const int&, const int&);

double sum(const double&, const double&);
double subtract(const double&, const double&);
double multiply(const double&, const double&);
double division(const double&, const double&);
double power(const double&, const int&);
unsigned long long factorial(const int&);

double applyUnaryOperation(Operation, const double&);
double applyBinaryOperation(Operation, const double&, const double&);



Operation chooseOperation();


#endif FUNCTIONS_H
