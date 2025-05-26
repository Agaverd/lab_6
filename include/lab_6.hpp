#pragma once

#ifndef LAB_6_LIB_HPP
#define LAB_6_LIB_HPP

#include <vector>
#include <algorithm>

namespace lab
{
    // SortingStrategy
    class SortingStrategy
    {
    public:
        virtual void sort(std::vector<int>& data) const = 0;
        virtual ~SortingStrategy() = default;
    };

    // BubbleSort
    class BubbleSortStrategy : public SortingStrategy
    {
    public:
        void sort(std::vector<int>& data) const override;
    };

    // QuickSort
    class QuickSortStrategy : public SortingStrategy
    {
    public:
        void sort(std::vector<int>& data) const override;

    private:
        int partition(std::vector<int>& data, int low, int high) const;
        void quickSort(std::vector<int>& data, int low, int high) const;
    };

    // StdSort
    class StdSortStrategy : public SortingStrategy
    {
    public:
        void sort(std::vector<int>& data) const override;
    };

    // InsertionSort
    class InsertionSortStrategy : public SortingStrategy
    {
    public:
        void sort(std::vector<int>& data) const override;
    };

    // Sorter
    class Sorter
    {
    public:
        Sorter(const SortingStrategy* strategy);
        void sortData(std::vector<int>& data) const;

    private:
        const SortingStrategy* strategy_;
    };
}

#endif