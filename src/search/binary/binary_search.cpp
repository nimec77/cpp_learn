//
// Created by comrade77 on 26.11.2021.
//

#include "binary_search.h"

bool BinarySearch::Search(const std::vector<int> &arr, const int value) {
    unsigned long p = 0;
    auto r = arr.size();

    while (p <= r) {
        auto q = (p + r) / 2;
        if (arr[q] == value) {
            return true;
        }
        if (arr[q] > value) {
            r = q - 1;
        } else {
            p = q + 1;
        }
    }

    return false;
}

bool BinarySearch::RecursiveSearch(const std::vector<int> &arr, const int value, const unsigned long p,
                                   const unsigned long r) {
    if (p > r) {
        return  false;
    }
    auto q = (p + r) / 2;
    if (arr[q] == value) {
        return true;
    }
    if (arr[q] > value) {
        return RecursiveSearch(arr, value, p, q -1);
    }

    return RecursiveSearch(arr, value, q+ 1, r);
}
