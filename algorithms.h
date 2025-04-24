#ifndef ALGORITHMS_H 
#define ALGORITHMS_H

#include <vector>

class SortingAlgorithms
{
    public:
        SortingAlgorithms ();

        std::vector<int> bogo_sort (const std::vector<int>& values);

        std::vector<int> selection_sort (const std::vector<int>& values);

        std::vector<int> bubble_sort (const std::vector<int>& values);

        std::vector<int> merge_sort (const std::vector<int>& values);

        std::vector<int> quick_sort (const std::vector<int>& values);

        bool check_sort (const std::vector<int>& values);

        void print_vector (const std::vector<int>& values);

    private:
        int get_index_of_minimum (const std::vector<int>& values, int starting_index);
};

#endif
