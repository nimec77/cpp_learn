//
// Created by comrade77 on 29.11.2021.
//
#include <gtest/gtest.h>
#include <sort/selection/selection_sort.h>
#include "../../helpers/sort_test_helper.h"

TEST(SelectionSortTest, SelectionSortSort) {
    const auto result_ = SelectionSort::Sort({4, 7, 2, 9, 10, 0});
    const auto sorted_ = std::vector<int>{0, 2, 4, 7, 9, 10};

    test_helper::SortResultTest(*result_, sorted_);
}