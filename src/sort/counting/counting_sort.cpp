//
// Created by comrade77 on 03.12.2021.
//

#include "counting_sort.h"

std::unique_ptr<std::vector<int>> CountingSort::Sort(const std::vector<int> &arr, const int max_value) {
    auto less_ = CountKeysEqual(arr, max_value);

    return Rearrange(arr, *less_, max_value);
}

std::unique_ptr<std::map<int, int>> CountingSort::CountKeysEqual(const std::vector<int> &arr, const int max_value) {
    std::map<int, int> equal_ = {};

    for (const auto key_: arr) {
        if (!equal_.contains(key_)) {
            equal_[key_] = 1;
        } else {
            equal_[key_]++;
        }
    }

    std::map<int, int> less_ = {};
    auto i_ = equal_.begin();
    auto prev_ = i_->first;
    less_[prev_] = 0;
    for (++i_; i_ != equal_.end(); prev_ = i_->first, ++i_) {
        less_[i_->first] = less_[prev_] + equal_[prev_];
    }

    return std::make_unique<std::map<int, int>>(less_);
}

std::unique_ptr<std::vector<int>> CountingSort::Rearrange(const std::vector<int> &arr, std::map<int, int> &less,
                                                          const int max_value) {
    std::vector<int> b_(arr.size());
//    std::fill(b_.begin(), b_.end(), 0);

    for (const auto key_: arr) {
        auto index_ = less[key_];
        b_[index_] = key_;
        less[key_]++;
    }
    return std::make_unique<std::vector<int>>(b_);
}
