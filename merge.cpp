
#include <iostream>
using namespace std;
//merge Function
void merge(int arr[], int l,int m, int r)
{ 
    int i = l; // starting array for left subarray
    int j = m + 1;//starting array of right subarray
    int k = l; //starting index  for temporary
    int temp[5]; //temporary array
    while (i <= m && j <= r)
         //r= right most elements m= midpoint
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i]; 
            // arr[i] is smaller than arr [j]
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j]; //arr[j] is smaller than arr [i]
            j++;
            k++;
        }
        /* code */
    }
    while (i <= m)
    {
        temp[k] = arr[i]; //copying all elements from left subarray to temp as it is
        i++;
        k++; /* code */
    }
    while (j <= r)
    {
        temp[k] = arr[j]; //copying all elements from right subarray to temp as it is
            j++;
        k++;
    }
    
    for (int s = l; s <= r; s++)
    {
        arr[s]= temp[s];
    }
    
}
//mergesort Function
void mergesort(int arr[], int l, int r )
{
    if (l <= r)
    {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);
        merge(arr, l, m, r); /* code */
    }
}

int main()
{   
   
    int myArr[5];
     int arr_size =5;
    cout<<"Enter the 5 elements in the array:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >>myArr[i]; /* code */
    }
    cout << "Before merge sort:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << myArr[i] << " "<<endl;
    }
    cout<<endl;

    mergesort(myArr, 0, (arr_size-1));
           
cout<<"After merge sort:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << myArr[i]<< " "<<endl;
    }
    return 0 ;
} 



// #include<iostream>
// using namespace std;

// void merge(int arr[], int l, int m, int r) {
//   int i = l;
//   int j = m + 1;
//   int k = l;

//   /* create temp array */
//   int temp[5];

//   while (i <= m && j <= r) {
//     if (arr[i] <= arr[j]) {
//       temp[k] = arr[i];
//       i++;
//       k++;
//     } else {
//       temp[k] = arr[j];
//       j++;
//       k++;
//     }

//   }

//   /* Copy the remaining elements of first half, if there are any */
//   while (i <= m) {
//     temp[k] = arr[i];
//     i++;
//     k++;

//   }

//   /* Copy the remaining elements of second half, if there are any */
//   while (j <= r) {
//     temp[k] = arr[j];
//     j++;
//     k++;
//   }

//   /* Copy the temp array to original array */
//   for (int p = l; p <= r; p++) {
//     arr[p] = temp[p];
//   }
// }

// /* l is for left index and r is right index of the 
//    sub-array of arr to be sorted */
// void mergeSort(int arr[], int l, int r) {
//   if (l < r) {
//     // find midpoint
//     int m = (l + r) / 2;

//     // recursive mergesort first and second halves 
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);

//     // merge
//     merge(arr, l, m, r);
//   }
// }

// int main() {
//   int myArr[5];
//   //int arr_size = sizeof(myarray)/sizeof(myarray[0]);
//   int arr_size = 5;

//   cout << "Enter 5 integers in any order: " << endl;
//   for (int i = 0; i < 5; i++) {
//     cin >> myArr[i];
//   }
//   cout << "Before Sorting :" << endl;
//   for (int i = 0; i < 5; i++) {
//     cout << myArr[i] << " "<endl;
//   }
//   cout << endl;
//   mergeSort(myArr, 0, (arr_size - 1)); // mergesort(arr,left,right) called

//   cout << "After Sorting" << endl;
//   for (int i = 0; i < 5; i++) {
//     cout << myArr[i] << " ";
//   }

//   return 0;
// }