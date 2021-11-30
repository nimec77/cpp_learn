//
// Created by comrade77 on 30.11.2021.
//

#include <gtest/gtest.h>
#include <sort/insertion/insertion_sort.h>

TEST(InsertionSortTest, InsertionSortSort) {
    const auto arr_ = InsertionSort::Sort({12, 9, 3, 7, 14, 11});
    const auto sorted_ = std::vector<int>{3, 7, 9, 11, 12, 14};

    for (const auto item: *arr_) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    ASSERT_EQ(arr_->size(), sorted_.size()) << "Vectors of unequal length";

    for (auto i = 0; i < arr_->size(); ++i) {
        EXPECT_EQ((*arr_)[i], sorted_[i]) << "Vectors differ at index " << i;
    }
}