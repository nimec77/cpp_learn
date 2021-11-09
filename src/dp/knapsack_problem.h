//
// Created by comrade77 on 09.11.2021.
//

#ifndef CPP_LEARN_KNAPSACK_PROBLEM_H
#define CPP_LEARN_KNAPSACK_PROBLEM_H


#include <array>
#include <vector>
#include <algorithm>


class KnapsackProblem {
public:
    static int CountMax(const std::vector<int> &weights, const std::vector<int> &values, int max_capacity);
};


#endif //CPP_LEARN_KNAPSACK_PROBLEM_H
