#include <stdio.h>

//--------Selection Sort----------//
void selectionSort(int arr[], int n)
{
    int i, j, min_id;
    for (i = 0; i < n - 1; i++)
    {
        min_id = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_id])
            {
                min_id = j;
            }
        int temp = arr[min_id];
        arr[min_id] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
