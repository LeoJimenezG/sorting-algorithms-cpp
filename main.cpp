#include <iostream>
#include "algorithms.h"

SortingAlgorithms sorting_algorithms;

int main ()
{
    std::vector numbers = {4, 0, 1, 5, 2, 3, 8, 9, 7, 6};
    std::cout << "Original vector: ";
    sorting_algorithms.print_vector(numbers);

    std::cout << '\n';

    std::vector bogo_sorted_numbers = sorting_algorithms.bogo_sort(numbers);
    std::cout << "Bogo Sorted vector: ";
    sorting_algorithms.print_vector(bogo_sorted_numbers);

    std::cout << '\n';
    
    std::vector selection_sorted_numbers = sorting_algorithms.selection_sort(numbers);
    std::cout << "Selection Sorted vector: ";
    sorting_algorithms.print_vector(selection_sorted_numbers);

    std::cout << '\n';

    std::vector bubble_sorted_numbers = sorting_algorithms.bubble_sort(numbers);
    std::cout << "Bubble Sorted vector: ";
    sorting_algorithms.print_vector(bubble_sorted_numbers);

    std::cout << '\n';

    std::vector merge_sorted_numbers = sorting_algorithms.merge_sort(numbers);
    std::cout << "Merge Sorted vector: ";
    sorting_algorithms.print_vector(merge_sorted_numbers);

    std::cout << '\n';

    return 0;
}
