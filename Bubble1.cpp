#include<bits/stdc++.h>
using namespace std;
void  BubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int size;
    cout<<"Size => ";
    cin>>size;
    int arr[size];
    cout<<"Elements => ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before Bubble sort => ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    BubbleSort(arr,size);
    cout<<"After Bubble sort =>  ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}