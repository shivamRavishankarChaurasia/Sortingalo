// #include <iostream>
// using namespace std;
// void Partition(int arr[], int l, int m, int h)
// {
//     int pivot = arr[l];
//     int i = l + 1;
//     int j = h;
//     int temp;
//     do
//     {
//         while (arr[i] <= pivot)
//         {
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             j++; /* code */
//         }
//         if (i < j)
//         {
//             temp = arr[i];
//             arr[i] = arr[j]; //swapping code
//             arr[j] = temp;   /* code */
//         }
        
            
        
//     }whi

//     //then swap arr[i] = low and arr[j] = high
//     temp = arr[l];
//     arr[l]=arr[j];
//     arr[j] = temp;
//     return j ;
// }

// void quicksort(int arr[], int l, int h , int mid )
// {
//     int p;
//     if (l < h)
//     {
//         p = Partition(arr, l, h);
//         quicksort(arr, l, mid - 1);
//         quicksort(arr, mid + 1, h)
//     }
// }
// int main()
// {
//     int myArr[10];
//     int myArr_size = 10;

//     cout << "Enter the 10 elements in the array :" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> myArr[i]; /* code */
//     }
//     cout << "Before Quick sort:" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << myArr[i] << "  ";
//     }
//     cout << endl;
//     quicksort(myArr, 0, (myArr_size - 1));

//     cout << "After Quick Sort the array must be sorted:" << endl;

//     for (int i = 0; i < 10; i++)
//     {
//         cout << myArr[i] << "  "; /* code */
//     }

//     return 0;
// }




#include<iostream>
using namespace std;
int Partition(int arr[],int s,int e){
    int pivot =arr[e];
    
int pIndex = s ;
    for (int i =s; i < e-1 ; i++)
    {
        if(arr[i]<pivot){
            int temp;
            temp = arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
            }   
    
}
int temp = arr[e];
arr[e]=arr[pIndex];
arr[pIndex] = temp;
return pIndex;


}


void Quicksort(int arr[] , int s , int e){
    if (s<e){
        int p = Partition(arr, s,e );
        Quicksort(arr, s ,p-1);
        Quicksort(arr , p+1, e);

    }
}



int main(){
    int myArr[10];
    int size = 10;

    cout << "Enter the 10 elements in the array :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>myArr[i]; /* code */
    }
    cout << "Before Quick sort:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<myArr[i] << "  ";
    }
    cout << endl;
    Quicksort(myArr, 0, (size - 1));

    cout << "After Quick Sort the array must be sorted:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << myArr[i] << "  "; /* code */
    }

    return 0;

}






//  #include<iostream>
// using namespace std;
// // quick sort sorting algorithm
// int Partition(int arr[], int s, int e)
// {
//  int pivot = arr[e];
//  int pIndex = s;
 
//  for(int i = s;i<e;i++)
//  {
//  if(arr[i]<pivot)
//  {
//  int temp = arr[i];
//  arr[i] = arr[pIndex];
//  arr[pIndex] = temp;
//  pIndex++;
//  }
//  }
 
//  int temp = arr[e];
//  arr[e] = arr[pIndex];
//  arr[pIndex] = temp;
 
//  return pIndex;
// }
 
// void QuickSort(int arr[], int s, int e)
// {
//  if(s<e)
//  {
//  int p = Partition(arr,s, e);
//  QuickSort(arr, s, (p-1));  // recursive QS call for left partition
//  QuickSort(arr, (p+1), e);  // recursive QS call for right partition
//  }
// }
 
// int main()
// {
 
//  int size=0;
//  cout<<"Enter Size of array: "<<endl;
//  cin>>size;
//  int>myArr[size];
 
//  cout<<"Enter "<<size<<" integers in any order: "<<endl;
//  for(int i=0;i<size;i++)
//  {
//  cin>>myArr[i];
//  }
//  cout<<"Before Sorting"<<endl;
//  for(int i=0;i<size;i++)
//  {
//  cout<>myArr[i]<<" ";
//  }
//  cout<<endl;
 
//  QuickSort>myArr,0,(size-1));  // quick sort called
 
//  cout<<"After Sorting"<<endl;
//  for(int i=0;i<size;i++)
//  {
//  cout<>myArr[i]<<" ";
//  }
 
//  return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
// int i;
//     int size=0;
//     cout<<"Enter the size of the array :"<<endl;
//    cin>>size;
//     int myArr[size];
//     cout<<"Enter "<< size <<"intergers in my array:"<<endl;
//     for (int  i = 0; i < size ; i++)
//     {
//        cin>>myArr[i];/* code */
//     }
// cout<<"Before Sorting"<<endl;
    
// for (int  i = 0; i < size ; i++)
//     {
//        cout<<myArr[i]<<"  ";/* code */
//     }
//     cout<<endl;

// //  Quicksort(myArr,0 ,(size-1));

//     cout<<"After Sorting"<<endl;
//     {
//         cout<<myArr[i]<<"  ";
//     }

    
//     return 0;

// }