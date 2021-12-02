//
// Created by comrade77 on 02.12.2021.
//

#include <gtest/gtest.h>
#include <sort/quicksort/quicksort.h>
#include "../../helpers/sort_test_helper.h"

TEST(QuicksortTest, QuicksortSort) {
    std::vector<int> arr_{9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    Quicksort::Sort(arr_, 0, 9);
    const auto sorted_ = std::vector<int>{2, 3, 5, 6, 7, 9, 10, 11, 12, 14};

    test_helper::SortResultTest(arr_, sorted_);
}