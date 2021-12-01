//
// Created by comrade77 on 01.12.2021.
//

#include "merge_sort.h"

std::unique_ptr<std::vector<int>> MergeSort::Sort(std::vector<int> &arr, const int p, const int r) {
    if (p >= r) {
        return std::make_unique<std::vector<int>>(arr);
    }

    auto q = (p + r) / 2;

    Sort(arr, p, q);
    Sort(arr, q + 1, r);

    Merge(arr, p, q, r);

    return std::make_unique<std::vector<int>>(arr);
}

void MergeSort::Merge(std::vector<int> &arr, const int p, const int q, const int r) {
    std::vector<int> b_(arr.begin() + p, arr.begin() + q + 1);
    std::vector<int> c_(arr.begin() + q + 1, arr.begin() + r + 1);

    b_.push_back(INT_MAX);
    c_.push_back(INT_MAX);

    auto i = 0;
    auto j = 0;
    for (auto k = p; k <= r; ++k) {
        if (b_[i] <= c_[j]) {
            arr[k] = b_[i++];
        } else {
            arr[k] = c_[j++];
        }
    }
 }
