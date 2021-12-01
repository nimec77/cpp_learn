//
// Created by comrade77 on 01.12.2021.
//

#include "sort_test_helper.h"

namespace test_helper {

    void SortResultTest(const std::vector<int> &result, const std::vector<int> &sorted) {
        for (const auto item: result) {
            std::cout << item << " ";
        }
        std::cout << std::endl;

        ASSERT_EQ(result.size(), sorted.size()) << "Vectors of unequal length";

        for (auto i = 0; i < result.size(); ++i) {
            EXPECT_EQ(result[i], sorted[i]) << "Vectors differ at index " << i;
        }
    }

}