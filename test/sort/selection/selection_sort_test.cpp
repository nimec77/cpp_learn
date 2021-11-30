//
// Created by comrade77 on 29.11.2021.
//
#include <gtest/gtest.h>
#include <sort/selection/selection_sort.h>

TEST(SelectionSortTest, SelectionSortSort) {
    const auto arr_ = SelectionSort::Sort({4, 7, 2, 9, 10, 0});
    const auto sorted_ = std::vector<int>{0, 2, 4, 7, 9, 10};

    for (const auto item : *arr_) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    ASSERT_EQ(arr_->size(), sorted_.size()) << "Vectors of unequal length";

    for (auto i = 0; i < arr_->size(); ++i) {
        EXPECT_EQ((*arr_)[i], sorted_[i]) << "Vectors differ at index " << i;
    }
}