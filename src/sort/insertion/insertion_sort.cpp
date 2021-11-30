//
// Created by comrade77 on 30.11.2021.
//

#include "insertion_sort.h"

std::unique_ptr<std::vector<int>> InsertionSort::Sort(const std::vector<int> &arr) {
    std::vector<int> a_(arr);

    for (auto i = 1; i < arr.size(); ++i) {
        const auto key_ = a_[i];
        auto j = i - 1;
        for (; j >= 0 && a_[j] > key_; --j) {
            a_[j + 1] = a_[j];
        }
        a_[j + 1] = key_;
    }

    return std::make_unique<std::vector<int>>(a_);
}
