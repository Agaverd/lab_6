#include <lab_6.hpp>

namespace lab
{
    // BubbleSort
    void BubbleSortStrategy::sort(std::vector<int>& data) const
    {
        int n = data.size();
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = 0; j < n - i - 1; ++j)
            {
                if (data[j] > data[j + 1]) std::swap(data[j], data[j + 1]);
            }
        }
    }

    // QuickSort
    int QuickSortStrategy::partition(std::vector<int>& data, int low, int high) const
    {
        int pivot = data[high];
        int i = low - 1;

        for (int j = low; j < high; ++j)
        {
            if (data[j] <= pivot)
            {
                ++i;
                std::swap(data[i], data[j]);
            }
        }
        std::swap(data[i + 1], data[high]);

        return i + 1;
    }

    void QuickSortStrategy::quickSort(std::vector<int>& data, int low, int high) const
    {
        if (low < high)
        {
            int pi = partition(data, low, high);
            quickSort(data, low, pi - 1);
            quickSort(data, pi + 1, high);
        }
    }

    void QuickSortStrategy::sort(std::vector<int>& data) const
    {
        if (!data.empty()) quickSort(data, 0, data.size() - 1);
    }

    // StdSort
    void StdSortStrategy::sort(std::vector<int>& data) const
    {
        std::sort(data.begin(), data.end());
    }

    // InsertionSort
    void InsertionSortStrategy::sort(std::vector<int>& data) const
    {
        for (size_t i = 1; i < data.size(); ++i)
        {
            int key = data[i];
            int j = i - 1;
            while (j >= 0 && data[j] > key)
            {
                data[j + 1] = data[j];
                --j;
            }
            data[j + 1] = key;
        }
    }

    // Sorter
    Sorter::Sorter(const SortingStrategy* strategy) : strategy_(strategy) {}
    void Sorter::sortData(std::vector<int>& data) const { strategy_->sort(data); }
}