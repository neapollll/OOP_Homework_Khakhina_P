#include<vector>
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

template<typename T>
int partition(std::vector<T>& arr, int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

template<typename T>
void quickSort(std::vector<T>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

template<typename T>
void quickSort(std::vector<T>& arr) {
    quickSort(arr, 0, arr.size() - 1);
}