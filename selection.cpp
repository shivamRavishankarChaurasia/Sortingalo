#include <iostream>
using namespace std;
void SelectionSort(int arr[],int size)
{
    int min;
    for (int i = 0; i <= size-1; i++)
    {
        min = i;

        for (int j = i + 1; j < size; j++) //for comparison of elements
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Swap condition
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the element inside the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array  Before Selection  Sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    SelectionSort(arr,size);
    cout << "Array After Selection  Sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}
