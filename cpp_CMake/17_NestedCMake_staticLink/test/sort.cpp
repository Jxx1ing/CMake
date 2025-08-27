#include <iostream>
#include <vector>
#include "sort.h"
#include "calc.h"

int main()
{
    // 用于测试静态库中引用另一个静态库（sort 引用calc）
    int number = add(1, 23);
    printf("test number = %d\n", number);

    // 插入排序测试
    std::vector<int> arr1 = {45, 67, 12, 89, 2, 32, 66, 22, 5, 54, 6, 7};
    insertSort(arr1);
    std::cout << "插入排序之后的序列：";
    for (int n : arr1)
        std::cout << n << " ";
    std::cout << std::endl;

    // 选择排序测试
    std::vector<int> arr2 = {33, 12, 5, 6, 10};
    selectSort(arr2);
    std::cout << "选择排序之后的序列：";
    for (int n : arr2)
        std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
