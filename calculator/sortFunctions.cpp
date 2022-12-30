#include "sortFunctions.h"
using namespace calculator;

void calculator::selectionSort(std::vector<int>& array, std::function<bool(int, int)> comp) {
    for (int i = 0; i < array.size() - 1; i++) {
        int min_i = i;
        for (int j = i + 1; j < array.size(); j++) {
            if (comp(array[j], array[min_i]))
                min_i = j;
        }
        if (min_i != i) {
            std::swap(array[min_i], array[i]);
        }
    }
}
void calculator::doubleSelectionSort(std::vector<int>& array, std::function<bool(int, int)> comp) {
    for (int i = 0, j = array.size() - 1; i < j; i++, j--) {
        int min = array[i], max = array[i];
        int min_i = i, max_i = i;
        for (int k = i; k <= j; k++) {
            if (comp(max, array[k])) {
                max = array[k];
                max_i = k;
            }
            else if (comp(array[k], min)) {
                min = array[k];
                min_i = k;
            }
        }
        std::swap(array[i], array[min_i]);
        if (array[min_i] == max) {
            std::swap(array[j], array[min_i]);
        }

        else {
            std::swap(array[j], array[max_i]);
        }
    }
}
void calculator::bubbleSort(std::vector<int>&array, std::function<bool(int, int)> comp) {
    for (int i = 0; i < array.size() - 1; i++) {
        for (int j = 0; j < array.size() - i - 1; j++) {
            if (comp(array[j + 1], array[j])) {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}
