#pragma once
#include <string>
#include <vector>
#include <memory>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>>);
void add10(std::vector<std::shared_ptr<int>>);
void sub10(int *const ptr);
void sub10(std::vector<std::shared_ptr<int>>);