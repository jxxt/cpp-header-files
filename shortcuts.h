#include <iostream>
#include <vector>

// print array

template <typename T, size_t N>
void print(const T (&array)[N])
{
    std::cout << "[ ";
    for (size_t i = 0; i < N; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;
}