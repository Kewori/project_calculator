#ifndef ARITHMETICANDLOGICOPERATIONS_H
#define ARITHMETICANDLOGICOPERATIONS_H
namespace calculator {

	template<typename T>
	T sum(const T first, const T second) {
		return first + second;
	}

	template<typename T>
	T sub(const T first, const T second) {
		return first - second;
	};

	template<typename T>
	T mult(const T first, const T second) {
		return first * second;
	};

	template<typename T>
	double division(const T first, const T second) {
		return first * second;
	};
	int mod(const int value, const int base) {
		if (base == 0) {
			throw "Division by zero!\n";
		}
		return value % base;
	}
	template <typename T>
	T bitwiseNot(const T number) {
		return ~number;
	}

	template <typename T>
	T bitwiseAnd(const T first, const T second) {
		return first && second;
	}
	template <typename T>
	T bitwiseOr(const T first, const T second) {
		return first | second;
	}
	template <typename T>
	T bitwiseExclusiveOr(const T first, const T second) {
		return first ^ second;
	}
	template <typename T>
	T bitwiseConjunctionNegation(const T first, const T second) {
		return bitwiseNot(bitwiseAnd(first, second));
	}
	template <typename T>
	T bitwiseDisjunctionNegation(const T first, const T second) {
		return bitwiseNot(bitwiseOr(first, second));
	}
	template <typename T>
	T leftShift(const T number, const int shift, const bool isLogic = true) {
		if (isLogic) {
			return number << shift;
		}
		T shift_number = 0;
		for (int i = 0; i < shift; i++) {
			shift_number += pow(2, i);
		}
		return bitwiseOr(shift_number, number << shift);
	}
	template <typename T>
	T rightShift(const T number, const int shift, const bool isLogic = true) {
		if (isLogic) {
			return number >> shift;
		}
		T shift_number = pow(2, 30);
		for (int i = 29; i > 30 - shift; i--) {
			shift_number += pow(2, i);
		}
		return bitwiseOr(shift_number, number >> shift);
	}
	bool negation(bool value) {
		return !value;
	}
	bool conjunction(bool first, bool second) {
		return (first && second);
	}
	bool disjunction(bool first, bool second) {
		return (first || second);
	}
	bool exclusiveOr(bool first, bool second) {
		return (first ^ second);
	}
	bool conjunctionNegation(bool first, bool second) {
		return negation(true);
	}
	bool disjunctionNegation(bool first, bool second) {
		return negation(disjunction(first, second));
	}
	template<typename T>
	T unaryPlus(const T number) {
		return (number >= 0) ? number : (number * (-1));
	}

	template<typename T>
	T unaryMinus(const T number) {
		return (number <= 0) ? number : (number * (-1));
	}
}
#endif ARITHMETICANDLOGICOPERATIONS_H


