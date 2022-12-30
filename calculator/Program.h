#ifndef PROGRAM_H
#define PROGRAM_H
#include "mathFunctions.h"
#include "stringFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include "sortFunctions.h"
#include "inputOutputFunctions.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using namespace calculator;

class Program {
public:
	static int main() {
		cout << absolute(-3) << '\n';
		cout << factorial(3) << '\n';
		cout << reciprocalFunction(3) << '\n';
		cout << power(3, -3) << '\n';
		cout << radical(3, 3) << '\n';
		cout << cotDeg(30) << '\n';
		string a = reverse_polish_notation("3+3/3");
		cout << count_reverse_polish_notation(a);
		return 0;
	}
};

#endif PROGRAM_H
