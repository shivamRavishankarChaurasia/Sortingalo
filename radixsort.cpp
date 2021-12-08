#include <iostream>
using namespace std;

int Getmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void CountingSort(int arr[], int size, int div)
{
    int output_array[size];
    int count[10] = {0};
    for (int i = 0; i < size; i++)
    {
        count[(arr[i] / div) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        output_array[count[(arr[i] / div) % 10] - 1] = arr[i];
        count[(arr[i] / div) % 10]--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = output_array[i];
    }
}

void RadixSort(int arr[], int size)
{
    int max = Getmax(arr, size);
    for (int div = 1; max / div > 0; div *= 10)
    {
        CountingSort(arr, size, div);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;
    int myArr[size];
    cout << "Enter " << size << " integers in any order :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> myArr[i];
    }
    cout << endl;
    cout << "Before Radix Sort => " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << " ";
    }
    cout << endl;

    RadixSort(myArr, size); //RadixSort function is called

    cout << "After Radix Sort => " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}



