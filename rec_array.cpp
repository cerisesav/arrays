#include <stdio.h>

void tr_print(int* data);

int main()
{
    int const len = 10;

    int data[len] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    size_t size_x = sizeof(data) / sizeof(data[0]);

    tr_print(data);

}

void tr_print(int* data)
{
    int index = 0;

    for (size_t i = 0; i < 4; i++)
    {
        {
            index++;
            for (size_t j = 0; j < index; j++)
            printf("%d ", *((int*)data + (i * (1 + (index-1)) / 2) + j));
        }
    printf("\n");
    }
}


