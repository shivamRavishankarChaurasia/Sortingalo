#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int size){
    for(int j=1;j<size;j++){
        int key = arr[j];
        int i = j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array => "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element in the array => "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before Insertion => "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr,size);
     cout<<"After  Insertion => "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}