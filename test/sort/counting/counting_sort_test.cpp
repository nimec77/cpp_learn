//
// Created by comrade77 on 03.12.2021.
//

#include <gtest/gtest.h>
#include <sort/counting/counting_sort.h>
#include "../../helpers/sort_test_helper.h"

TEST(CountingSortTest, CountingSortSort) {
    const auto result_ = CountingSort::Sort({4, 1, 5, 0, 1, 6, 5, 1, 5, 3}, 6);

}