//Algorithm pratice
// merge Sort
/*
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    // temporary array 
    int temp[5];
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int p = l; p <=r; p++)
    {
        arr[p] = temp[p];
    }
}

// mergeSort  function

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int myArr[5];
    // int size;
    // int arr[size];
    // cout << "Enter the size of array that has to be sorted : " << endl;
    // cin >> size;
    cout << "Enter 5  elements in the array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myArr[i];
    }

    cout << "Before  Merge Sort " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArr[i] << "  ";
    }
    cout << endl;

    mergeSort(myArr, 0, 4);
   

    cout
        << "After Merge Sort " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArr[i] << "  ";
    }
    cout << endl;

    return 0;
}



*/








// when we take dynamic input


#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    
    // temporary array 
    int size =(r-1)+1;
    int temp[size];
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int p = l; p <=r; p++)
    {
        arr[p] = temp[p];
    }
}

// mergeSort  function

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    
    int size;
    cout << "Enter the size of array that has to be sorted : " << endl;
    cin >> size;
    int myArr[size];
    cout << "Enter elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> myArr[i];
    }

    cout << "Before  Merge Sort " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << "  ";
    }
    cout << endl;

    mergeSort(myArr, 0, (size-1));
   

    cout
        << "After Merge Sort " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << "  ";
    }
    cout << endl;

    return 0;
}



