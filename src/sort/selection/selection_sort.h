//
// Created by comrade77 on 29.11.2021.
//

#ifndef CPP_LEARN_SELECTION_SORT_H
#define CPP_LEARN_SELECTION_SORT_H

#include <vector>
#include <memory>

class SelectionSort {
public:
    static std::unique_ptr<std::vector<int>> Sort(const std::vector<int> &arr);
};


#endif //CPP_LEARN_SELECTION_SORT_H
