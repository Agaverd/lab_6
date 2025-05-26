#include <lab6_test.hpp>

namespace test
{
    void print_vector(const std::vector<int>& data)
    {
        for (int num : data) std::cout << num << " ";
        std::cout << '\n';
    }

    bool is_equal(const std::vector<int>& data1, const std::vector<int>& data2)
    {
        if (data1.size() != data2.size()) throw "non-compareble data";

        bool equal = true;
        for (int i = 0; i < data1.size(); ++i)
        {
            if (data1[i] != data2[i])
            {
                equal = false;
                break;
            }
        }

        return equal;
    }

    void test_all()
    {
        std::cout << "BubbleSort\n";
        test_sort<lab::BubbleSortStrategy>();

        std::cout << "QuickSort\n";
        test_sort<lab::QuickSortStrategy>();

        std::cout << "StdSort\n";
        test_sort<lab::StdSortStrategy>();

        std::cout << "InsertionSort\n";
        test_sort<lab::InsertionSortStrategy>();
    }
}