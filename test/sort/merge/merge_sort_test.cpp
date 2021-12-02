//
// Created by comrade77 on 01.12.2021.
//

#include <gtest/gtest.h>
#include <sort/merge/merge_sort.h>
#include "../../helpers/sort_test_helper.h"

TEST(MergeSortTest, MergeSortSort) {
    std::vector<int> arr_{12, 9, 3, 7, 14, 11, 6, 2, 10, 5};
    MergeSort::Sort(arr_, 0, 9);
    const auto sorted_ = std::vector<int>{2, 3, 5, 6, 7, 9, 10, 11, 12, 14};

    test_helper::SortResultTest(arr_, sorted_);
}