//
// Created by Dmitry Seloustev on 01.01.2022.
//

#include <gtest/gtest.h>
#include <big_numbers/big_numbers.h>

TEST(BigNumbersTest, ModularExponentiationTest) {
    const auto result = BigNumbers::ModularExponentiation(2, 20 , 1048577);

    std::cout << result << std::endl;

    ASSERT_EQ(result, 1048576);
}