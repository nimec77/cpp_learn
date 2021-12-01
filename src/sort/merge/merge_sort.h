//
// Created by comrade77 on 01.12.2021.
//

#ifndef CPP_LEARN_MERGE_SORT_H
#define CPP_LEARN_MERGE_SORT_H

#include <vector>
#include <memory>

class MergeSort {
public:
    static std::unique_ptr<std::vector<int>> Sort(std::vector<int> &arr, int p, int r);

private:
    static void Merge(std::vector<int> &arr, int p, int q, int r);
};


#endif //CPP_LEARN_MERGE_SORT_H
