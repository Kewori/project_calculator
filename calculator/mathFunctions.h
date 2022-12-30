#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H
namespace calculator {

#define EPSILON 0.000'000'001

template<typename T>
T absolute(const T number) {
	return (number >= 0) ? number : -number;
};
template <typename T>
double reciprocalFunction(const T number) {
    return 1.0 / number;
}
template<typename T>
double power(const T number, const int pow) {
    double res = 1;
    if (pow >= 0) {
        for (int i = 0; i < pow; i++) {
            res *= number;
        }
    }
    else {
        double reciprocal_number = reciprocalFunction(number);
        for (int i = 0; i < absolute(pow); i++) {
            res *= reciprocal_number;
        }
    }
    return res;
}
long long factorial(const long long);
template <typename T>
double radical(const T number, const int pow) {
    if (pow % 2 == 0 && number < 0) {
        throw "Less then zero!\n";
    }
    if (pow <= 0) {
        throw "Such radical doesnt exist!\n";
    }
    else {
        int multer = 1;
        for (; calculator::power(multer, pow) < number; multer++) {}
        double number_ = static_cast<double>(number) / calculator::power(multer, pow) - 1;
        if (number_ == 0.0) {
            return multer;
        }
        int denom = 1;
        double res = 1;
        double pseudo_mu = 1.0 / pow;
        double mu = pseudo_mu;

        for (int i = 1; i < 20; i++)
        {
            res += (mu * number_) / calculator::factorial(denom);
            denom++;
            pseudo_mu -= 1;
            mu *= pseudo_mu;
            number_ *= number_;
        }
        res *= multer;
        return res;
    }
}
template <typename T>
double cosRad(T arg) {
    double answer = 1, elem = 1;
    int sign = -1;
    for (int i = 1; elem >= EPSILON; i+=2) {
        elem *= arg * arg / (i * (i + 1));
        answer += sign * elem;;
        sign *= -1;
    }
    return answer;
}
template <typename T>
double cosDeg(T arg) {
    return cosRad(arg * 0.017453);
}
template <typename T>
double sinRad(T arg) {
    int sign = 1, i = 1;
    long double answer = arg, elem = arg;
    for (int i = 1; elem >= EPSILON; i+=2) {
        sign *= -1;
        elem *= arg * arg / ((i + 1) * (i + 2));
        answer += sign * elem;
    }
    return answer;
}
template <typename T>
double sinDeg(T arg) {
    return sinRad(arg * 0.017453);
}
template <typename T>
double tanRad(T arg) {
    return sinRad(arg) / cosRad(arg);
}
template <typename T>
double tanDeg(T arg) {
    return tanRad(arg * 0.017453);
}
template <typename T>
double cotRad(T arg) {
    return cosRad(arg) / sinRad(arg);
}
template <typename T>
double cotDeg(T arg) {
    return cotRad(arg * 0.017453);
}


}
#endif MATHFUNCTIONS_H
