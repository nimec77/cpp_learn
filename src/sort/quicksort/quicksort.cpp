//
// Created by comrade77 on 02.12.2021.
//

#include "quicksort.h"

void Quicksort::Sort(std::vector<int> &arr, const int p, const int r) {
    if (p >=r) {
        return;
    }

    const auto q = Partition(arr, p, r);

    Sort(arr, p, q - 1);
    Sort(arr, q + 1, r);
}

int Quicksort::Partition(std::vector<int> &arr, const int p, const int r) {
    auto q = p;

    for (auto u = p; u < r; ++u) {
        if (arr[u] <= arr[r]) {
            std::swap(arr[q++], arr[u]);
        }
    }
    std::swap(arr[q], arr[r]);

    return q;
}
