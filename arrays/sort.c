#include <stdio.h>
void sort(int array[], int size);
void printArray(int array[], int size);
int main()
{
    int array[] = {8, 9, 5, 4, 7, 6, 3, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printArray(array, size);
}

void sort(int array[], int size)
{
    for (int i = 1; i < size - 1; i++)
    {
        for (int j = 1; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}