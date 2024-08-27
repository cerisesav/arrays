#include <stdio.h>

void Print(int* data, size_t size_x, size_t size_y);

int main()
{
    int data[5][4] = {
                      {11, 12, 13, 14},
                      {21, 22, 23, 24},
                      {31, 32, 33, 34},
                      {41, 42, 43, 44},
                      {51, 52, 53, 54}
                     };

    size_t size_x = sizeof(data) / sizeof(data[0]);
    size_t size_y = sizeof(data[0]) / sizeof(data[0][0]);
    Print(*data, size_x, size_y);

}

void Print(int* data, size_t size_x, size_t size_y)
{
    for (size_t i = 0; i < size_x; i++)
        {
        for (size_t j = 0; j < size_y; j++)
            printf("%d ", *((int*)data + i * size_y + j));
            printf("\n");
        }

}
