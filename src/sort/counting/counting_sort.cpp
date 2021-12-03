//
// Created by comrade77 on 03.12.2021.
//

#include "counting_sort.h"

std::unique_ptr<std::vector<int>> CountingSort::Sort(const std::vector<int> &arr, const int max_value) {
    auto less_ = CountKeysEqual(arr, max_value);

    return std::make_unique<std::vector<int>>();
}

std::unique_ptr<std::map<int, int>> CountingSort::CountKeysEqual(const std::vector<int> &arr, const int max_value) {
    std::map<int, int> equal_ = {};

    for (const auto key_ : arr) {
        if (!equal_.contains(key_)) {
            equal_[key_] = 1;
        } else {
            equal_[key_]++;
        }
    }

    std::map<int, int> less_ = {};
    auto i_ = equal_.begin();
    auto j_ = equal_.begin();
    less_[i_->first] = 0;
    for (++i_; i_ != equal_.end(); ++i_, ++j_) {
        less_[i_->first] = less_[j_->first] + equal_[j_->first];
    }

    return std::make_unique<std::map<int, int>>(less_);
}
