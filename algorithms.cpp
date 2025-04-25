#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include "algorithms.h"

SortingAlgorithms::SortingAlgorithms ()
{

}

std::vector<int> SortingAlgorithms::bogo_sort (const std::vector<int>& values)
{
    std::vector<int> sorted_values = values; 

    if (sorted_values.size() <= 1)
    {
        return sorted_values;
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine rng(seed);

    while (!check_sort(sorted_values))
    {
        for (int i = sorted_values.size() - 1; i > 0; i--)
        {
            std::uniform_int_distribution dist(0, i);
            int random_index = dist(rng);
            std::swap(sorted_values[i], sorted_values[random_index]);
        }
    }

    return sorted_values;
}

std::vector<int> SortingAlgorithms::selection_sort (const std::vector<int>& values)
{
    std::vector<int> sorted_values = values;
    int size = sorted_values.size();

    if (size <= 1){
        return sorted_values;
    }

    for (int i = 0; i < size - 1; i++)
    {
        int index_of_min = get_index_of_minimum(sorted_values, i);
        std::swap(sorted_values[i], sorted_values[index_of_min]);
    }

    return sorted_values;
}

std::vector<int> SortingAlgorithms::bubble_sort (const std::vector<int>& values)
{
    std::vector<int> sorted_values = values;
    int size = sorted_values.size();

    if (size <= 1)
    {
        return sorted_values;
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (sorted_values[j] > sorted_values[j + 1])
            {
                std::swap(sorted_values[j], sorted_values[j + 1]);
            }
        }
    }

    return sorted_values;
}

std::vector<int> SortingAlgorithms::merge_sort (const std::vector<int>& values)
{
    int size = values.size();
    if (size <= 1)
    {
        return values;
    }
    int middle_index = size / 2;
    std::vector<int> left_values = return_vector_from_positions(values, 0, middle_index);
    std::vector<int> right_values = return_vector_from_positions(values, middle_index, size);
    std::vector<int> left_part = merge_sort(left_values);
    std::vector<int> right_part = merge_sort(right_values);

    std::vector<int> sorted_values = {};
    int left_index = 0;
    int right_index = 0;
    while (left_index < left_part.size() && right_index < right_part.size())
    {
        if (left_part[left_index] < right_part[right_index])
        {
            sorted_values.push_back(left_part[left_index]);
            left_index++;
        }
        else
        {
            sorted_values.push_back(right_part[right_index]);
            right_index++;
        }
    }
    for (int i = left_index; i < left_part.size(); i++)
    {
        sorted_values.push_back(left_part[i]);
    }
    for (int j = right_index; j < right_part.size(); j++)
    {
        sorted_values.push_back(right_part[j]);
    }

    return sorted_values;
}

std::vector<int> SortingAlgorithms::quick_sort (const std::vector<int>& values)
{
    return values;
}

bool SortingAlgorithms::check_sort (const std::vector<int>& values)
{
    for (int i=0; i < values.size() - 1; i++)
    {
        if (values[i] > values[i + 1])
        {
            return false;
        }
    }

    return true;
}

void SortingAlgorithms::print_vector (const std::vector<int>& values)
{
    for (int value: values)
    {
        std::cout << value << ", ";
    }
}

int SortingAlgorithms::get_index_of_minimum (const std::vector<int>& values, int starting_index)
{
    int minimum_index = starting_index;
    for (int i = starting_index + 1; i < values.size(); i++)
    {
        if (values[i] < values[minimum_index])
        {
            minimum_index = i;
        }
    }

    return minimum_index;
}

std::vector<int> SortingAlgorithms::return_vector_from_positions(const std::vector<int>& values, int start, int end)
{
    std::vector<int> result = {};
    for (int i = start; i < end; i++)
    {
        result.push_back(values[i]);
    }

    return result;
}