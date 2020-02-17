#include <gtest/gtest.h>
#include "../find_target_sum.h"


TEST(BasicTests, find_target_sum_right_input_test) {
    std::vector<int> input_array{1, 2, 3, 4};
    std::vector<int> result_array{1, 2};
    EXPECT_EQ(result_array,  find_target_sum(input_array, 5));
}

TEST(BasicTests, find_target_sum_wrong_input) {
    std::vector<int> input_array{1, 2, 3, 4};
    std::vector<int> result_array{};
    EXPECT_EQ(result_array,  find_target_sum(input_array, 9));
}