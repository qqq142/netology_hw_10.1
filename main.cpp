#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arrSize{};
    std::cout << "Введите размер массива: ";
    std::cin >> arrSize;

    int * intPtr = static_cast<int *>(malloc(arrSize * sizeof (int)));

    for (int i = 0; i < arrSize; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> intPtr[i];
    }

    std::cout << "Введённый массив: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout<< intPtr[i] << " ";
    }

    free(intPtr);

    return 0;
}
