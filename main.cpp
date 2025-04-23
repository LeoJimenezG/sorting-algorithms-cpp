#include <iostream>
#include "algorithms.h"

SortingAlgorithms sorting_algorithms;

int main ()
{
    std::vector numbers = {4, 0, 1, 5, 2, 3};
    sorting_algorithms.print_vector(numbers);

    std::cout << '\n';

    std::vector sorted_numbers = sorting_algorithms.bogo_sort(numbers);
    sorting_algorithms.print_vector(sorted_numbers);

    return 0;
}
