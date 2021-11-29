//
// Created by comrade77 on 29.11.2021.
//
#include <gtest/gtest.h>
#include <sort/selection/selection_sort.h>

TEST(SelectionSortTest, SelectionSortSort) {
    const auto arr = SelectionSort::Sort({4, 7, 2, 9, 10, 0});
    const auto sorted = std::vector<int>{0, 2, 4, 7, 9, 10};

    for (const auto item : *arr) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    ASSERT_EQ(arr->size(), sorted.size()) << "Vectors of unequal length";

    for (auto i = 0; i < arr->size(); ++i) {
        EXPECT_EQ((*arr)[i], sorted[i]) << "Vectors differ at index " << i;
    }
}