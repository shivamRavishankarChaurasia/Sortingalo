//QuickSort pratice

#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int start, int end)
{
    int pivot =arr[end];
    int pIndex = start;
    for (int i = start; i < end ; i++)
    {
        if (arr[i] <= pivot)
        {
          swap(arr[i],arr[pIndex]);
            pIndex++;
        }
    }
  swap(arr[end],arr[pIndex]);
    return pIndex;
}

void QuickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = Partition(arr, start, end);
        QuickSort(arr, start, (p - 1)); //recursively call For left subArray
        QuickSort(arr, (p + 1), end);   //recursively call For right SubArray
    }
}


int main()

{
    int size = 0;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int myArray[size];
    cout << "Enter the element in the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> myArray[i];
    }
    cout << "Before Quick Sort " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "  ";
    }
    cout<<endl;

    // Quick Sort function
    QuickSort(myArray, 0, (size - 1));

    cout << "After Quick Sort " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}