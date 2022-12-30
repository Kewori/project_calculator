#ifndef STRINGFUNCTIONS_H
#define STRINGFUNCTIONS_H
#include <string>
#include <map>
#include <iostream>
#include "StackOnList.h"
using std::string;
using std::map;
using std::make_pair;
namespace calculator {
    string reverse_polish_notation(string expression);
    int count_reverse_polish_notation(string rpn);   
}

#endif STRINGFUNCTIONS_H

