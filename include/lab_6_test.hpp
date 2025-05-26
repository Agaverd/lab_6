#pragma once

#ifndef LAB_6_TEST_HPP
#define LAB_6_TEST_HPP

#include <iostream>
#include <lab_6.hpp>

namespace test
{
    void print_vector(const std::vector<int>& data);
    bool is_equal(const std::vector<int>& data1, const std::vector<int>& data2);

    template<class T>
    void test_sort()
    {
        std::vector<int> UNSORTED_DATA = { 1, 2, 6, 7, 8, 9, 3, 4, 5};
        std::vector<int> SORTED_DATA = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

        std::vector<int> data_copy = UNSORTED_DATA;

        T sort_strategy;
        lab::Sorter sorter(&sort_strategy);

        sorter.sortData(data_copy);

        if (is_equal(data_copy, SORTED_DATA)) std::cout << "succesefully sorted\n";
        else
        {
            std::cout << "sorting gone wrong\n";
            print_vector(data_copy);
            print_vector(SORTED_DATA);
        }
        std::cout << '\n';
    }

    void test_all();
}

#endif