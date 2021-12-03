//
// Created by comrade77 on 03.12.2021.
//

#ifndef CPP_LEARN_COUNTING_SORT_H
#define CPP_LEARN_COUNTING_SORT_H

#include <vector>
#include <memory>
#include <map>

class CountingSort {
public:
    static std::unique_ptr<std::vector<int>> Sort(const std::vector<int> &arr, int max_value);

private:
    static std::unique_ptr<std::map<int, int>> CountKeysEqual(const std::vector<int> &arr, int max_value);
};


#endif //CPP_LEARN_COUNTING_SORT_H
