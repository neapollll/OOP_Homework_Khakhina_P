﻿#include<vector>
#include <algorithm>
#include <iostream>
//#include <cstddef>

template<typename T>
void bubbleSort(std::vector<T>& vec)
{
    T tmp;
    for (int i = 0; i < vec.size() - 1; i++) {
        //if(i % 1000 == 0) std::cout << i <<std::endl;
        for (int j = 0; j < vec.size() - 1 - i; j++) {
            if (vec[j] > vec[j + 1]) {
                tmp = vec[j + 1];
                vec[j + 1] = vec[j];
                vec[j] = tmp;
            }
        }
    }
}

template<typename T>
void fastSort(std::vector<T>& vec)
{
    std::sort(vec.begin(), vec.end());
}