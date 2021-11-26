//
// Created by comrade77 on 26.11.2021.
//

#ifndef CPP_LEARN_BINARY_SEARCH_H
#define CPP_LEARN_BINARY_SEARCH_H

#include <vector>

class BinarySearch {
public:
    static bool Search(const std::vector<int> &arr, int value);

    static bool RecursiveSearch(const std::vector<int> &arr, int value, unsigned long p, unsigned long r);
};


#endif //CPP_LEARN_BINARY_SEARCH_H
