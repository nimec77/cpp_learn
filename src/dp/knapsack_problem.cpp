//
// Created by comrade77 on 09.11.2021.
//

#include "knapsack_problem.h"

int KnapsackProblem::CountMax(const std::vector<int> &weights, const std::vector<int> &values, const int max_capacity) {
    std::vector<std::vector<int>> arr_(
            weights.size() + 1,
            std::vector<int>(max_capacity + 1, 0)
    );

    for (auto i = 1; i <= weights.size(); ++i) {
        for (auto j = 1; j <= max_capacity; ++j) {
            if (weights[i - 1] > j) {
                arr_[i][j] = arr_[i - 1][j];
            } else {
                const auto prev_ = arr_[i - 1][j];
                const auto formula_ = values[i - 1] + arr_[i - 1][j - weights[i - 1]];
                arr_[i][j] = std::max(prev_, formula_);
            }
        }
    }
    return arr_[weights.size()][max_capacity];
}
