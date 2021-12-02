//
// Created by comrade77 on 02.12.2021.
//

#ifndef CPP_LEARN_QUICKSORT_H
#define CPP_LEARN_QUICKSORT_H

#include <vector>
#include <memory>

class Quicksort {
public:
    static void Sort(std::vector<int> &arr, int p, int r);

    static int Partition(std::vector<int> &arr, int p, int r);
};


#endif //CPP_LEARN_QUICKSORT_H
