//
// Created by Dmitry Seloustev on 01.01.2022.
//

#include "big_numbers.h"

unsigned long BigNumbers::ModularExponentiation(unsigned long x, unsigned long d, unsigned long n) {
    if (!d) {
        return 1;
    }

    if (d % 2 == 0) {
        const auto z = ModularExponentiation(x, d / 2, n);
        return (z * z) % n;
    }

    const auto z = ModularExponentiation(x, (d - 1) / 2, n);
    return (z * z * x) % n;
}
