// Shell Sort
//Bubble Sort is used internally in these example

#include<iostream>
using namespace std;
void ShellSort(int arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2) //Calculate the gap at every iteration
    {
        for (int j = gap; j < size; j+=1)
        {
            int temp = arr[j];
            int i = 0;
            for (int i = j; (i >= gap) && (arr[i - gap] > temp); i -= gap)
            {
                arr[i] = arr[i - gap];
            }
            arr[i] = temp;
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;
    int myArr[size];
    cout << "Enter " << size << " elements in the Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> myArr[i];
    }
    cout << "Before Shell Sort => " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << " ";
    }
    cout << endl;


    cout << "Shell Sort is called :" << endl;
    ShellSort(myArr, size);
    cout << "After Shell Sort =>" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << " ";
    }
    return 0;
}
