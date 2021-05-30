#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector < std::shared_ptr<int> vec;
    vec.reserve(count);
    for (int i = 0; i < count; i++)
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec)
{
    for (auto element : vec)
    {
        std::cout << *element << "\n";
    }
}
void add10(std::vector<std::shared_ptr<int>> vecSum)
{
    for (auto element : vecSum)
    {
        if (element)
        {
            *element = *element + 10;
        }
    }
}