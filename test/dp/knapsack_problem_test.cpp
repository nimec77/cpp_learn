//
// Created by comrade77 on 09.11.2021.
//

#include <gtest/gtest.h>
#include <dp/knapsack_problem.h>

TEST(KnapsackProblemTest, SimpleTest) {
    const auto result = KnapsackProblem::CountMax({4, 1, 3}, {4000, 2500, 2000}, 4);
    ASSERT_EQ(result, 4500);
}