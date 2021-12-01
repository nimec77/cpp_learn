//
// Created by comrade77 on 30.11.2021.
//

#include <gtest/gtest.h>
#include <sort/insertion/insertion_sort.h>
#include "../../helpers/sort_test_helper.h"


TEST(InsertionSortTest, InsertionSortSort) {
    const auto result_ = InsertionSort::Sort({12, 9, 3, 7, 14, 11});
    const auto sorted_ = std::vector<int>{3, 7, 9, 11, 12, 14};

    test_helper::SortResultTest(*result_, sorted_);
}