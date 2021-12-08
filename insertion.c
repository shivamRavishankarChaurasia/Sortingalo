#include <stdio.h>

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void insertionSort(int *arr, int size)
{
    int key, j;
    for (int i = 1; i <= size - 1; i++)
    {
        /* code here */
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        { //arr[j]>key For assending order//arr[j]<key For decending order
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    /* code */
    /* code */
}


int main()
{
    int arr[] = {3, 4, 5, 8, 6, 2, 1};
    int size = 7;
    printarray(arr, size);
    insertionSort(arr, size);
    printarray(arr, size);
    return 0;
}