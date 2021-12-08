#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int s,int e){
    int pivot= arr[e];
    int pIndex=s;
    for(int i=s;i<e;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[pIndex]);
            pIndex++;

        }
    }
    swap(arr[e],arr[pIndex]);
    return pIndex;

}
void QuickSort(int arr[],int s,int e){
    if(s<e){
    int p = Partition(arr,s,e);
    QuickSort(arr,s,(p-1));
    QuickSort(arr,(p+1),e);
    }
}
int main(){
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