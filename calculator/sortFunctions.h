#ifndef SORTFUNCTIONS_H
#define SORTFUNCTIONS_H
#include <vector>
#include <functional>
namespace calculator {
    
    inline bool ascending(const long double& x, const long double& y) { return x < y; }
    inline bool descending(const long double& x, const long double& y) { return x > y; }
    void selectionSort(std::vector<int>& array, std::function<bool(int, int)> comp = ascending);
    void doubleSelectionSort(std::vector<int>& array, std::function<bool(int, int)> comp = ascending);
    void bubbleSort(std::vector<int>& array, std::function<bool(int, int)> comp = ascending);
    void insertionSort(std::vector<int>& array, std::function<bool(int, int)> comp = ascending);
    void shellSort(std::vector<int>& array, std::function<bool(int, int)> comp);
    void shakerSort(std::vector<int>& array, std::function<bool(int, int)> comp = ascending);



}

#endif SORTFUNCTIONS_H
