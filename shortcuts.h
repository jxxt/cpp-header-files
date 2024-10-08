/*

MIT License @ (https://www.github.com/jxxt)
Copyright(c) 2024 Jeet Debnath

A collection of shortcut functions to save time.

*/

//
//
//

#include <iostream>
#include <vector>

///// print array

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

///// print vector

template <typename T>
void print(const std::vector<T> &vec)
{
    std::cout << "[ ";
    for (const auto &elem : vec)
    {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

///// length of array

template <typename T, size_t N>
size_t length(const T (&array)[N])
{
    std::cout << N << std::endl;
}

///// length of vector

template <typename T>
size_t length(const std::vector<T> &vec)
{
    std::cout << vec.size() << std::endl;
}