#pragma once

#include <vector>
#include <unordered_map>

/**
 * @brief Returns indexes in numbers of two numbers sum of which equals to target value
 * @param numbers list of numbers
 * @param target_value desired sum of two values from numbers
 * @return returns two indexes
 */
template<typename T>
std::vector<T> find_target_sum(const std::vector<T>& numbers, T target_value) {
    std::unordered_map<T,T> pairs_storage{};
    for(int i = 0; i < numbers.size(); i++)
    {
        T diff_value = target_value - numbers[i];
        if(pairs_storage.find(diff_value) != pairs_storage.end())
        {
            return {pairs_storage[diff_value], i};
        }
        pairs_storage[numbers[i]] = i;
    }
    return {};
}
