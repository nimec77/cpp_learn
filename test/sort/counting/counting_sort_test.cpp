//
// Created by comrade77 on 03.12.2021.
//

#include <gtest/gtest.h>
#include <sort/counting/counting_sort.h>
#include "../../helpers/sort_test_helper.h"

TEST(CountingSortTest, CountingSortSort) {
    const auto result_ = CountingSort::Sort({4, 1, 5, 0, 1, 6, 5, 1, 5, 3}, 6);
    const auto sorted_ = std::vector<int>{0, 1, 1, 1, 3, 4, 5, 5, 5, 6};

    test_helper::SortResultTest(*result_, sorted_);
}