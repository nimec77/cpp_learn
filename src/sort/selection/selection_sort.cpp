//
// Created by comrade77 on 29.11.2021.
//

#include "selection_sort.h"

std::unique_ptr<std::vector<int>> SelectionSort::Sort(const std::vector<int> &arr) {
    std::vector<int> a_(arr);

    for (auto i = 0; i < a_.size() - 1; ++i) {
        auto smallest_ = i;
        for (auto j = i + 1; j < a_.size(); ++j) {
            if (a_[j] < a_[smallest_]) {
                smallest_ = j;
            }
        }
        std::swap(a_[i], a_[smallest_]);
    }
    return std::make_unique<std::vector<int>>(a_);
}
