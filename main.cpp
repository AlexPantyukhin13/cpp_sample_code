#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "find_target_sum.h"

int main() {
    std::vector<int> numbers;
    std::string input_string{}, tmp_string{};
    int parsed_number = 0;
    int target_value = 0;

    std::cout << "Please enter list of values: ";
    std::getline(std::cin, input_string);

    std::stringstream numbers_stream(input_string);

    while(!(numbers_stream.eof()))
    {
        numbers_stream >> tmp_string;
        if (std::stringstream(tmp_string) >> parsed_number)
        {
            numbers.push_back(parsed_number);
        }

    }

    std::cout << "Please enter target value: ";
    std::cin >> target_value;

    std::vector<int> final_result = find_target_sum(numbers, target_value);

    if(!(final_result.empty())){
        std::cout<< "First index " << final_result[0]  << " -> " << numbers[final_result[0]] << std::endl;
        std::cout<< "Second index " << final_result[1]  << " -> " << numbers[final_result[1]] << std::endl;
    } else {
        std::cout << "No such indexes!" << std::endl;
    }

    return 0;
}
