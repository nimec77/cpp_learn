//
// Created by comrade77 on 26.11.2021.
//

#include <gtest/gtest.h>
#include <search/binary/binary_search.h>

TEST(BinarySearchTest, SearchTestSuccess) {
    const auto result = BinarySearch::Search({1, 2, 5, 6, 7, 9, 11}, 5);

    ASSERT_TRUE(result);
}

TEST(BinarySearchTest, SearchTestFailed) {
    const auto result = BinarySearch::Search({1, 2, 5, 6, 7, 9, 11}, 3);

    ASSERT_FALSE(result);
}

TEST(BinarySearchTest, RecursiveSearchTestSuccess) {
    const auto result = BinarySearch::RecursiveSearch({1, 2, 5, 6, 7, 9, 11}, 5, 0, 7);

    ASSERT_TRUE(result);
}

TEST(BinarySearchTest, RecursiveSearchTestFailure) {
    const auto result = BinarySearch::RecursiveSearch({1, 2, 5, 6, 7, 9, 11}, 3, 0, 7);

    ASSERT_FALSE(result);
}