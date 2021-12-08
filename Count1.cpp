
#include<bits/stdc++.h>
using namespace std;
void countSort(int A[],int range,int size){
    int B[size];
    int count_arr[range];
    for(int i=0;i<range;i++){
     count_arr[i]=0;
    }
    for(int j=0;j<size;j++){
         count_arr[A[j]]=count_arr[A[j]]+1;
    }
    for(int i=0;i<range;i++){
        count_arr[i]=count_arr[i]+count_arr[i-1];
    }
    for(int j=size-1;j<0;j++){
         B[count_arr[A[j]]]=A[j];
         count_arr[A[j]]=count_arr[A[j]]-1;
    }
}
int main(){
    int range = 5;
    int size=0;
    cout<<"Enter the size => "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element in the array =>";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before Count sort =>  "<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    countSort(arr,5,size);
    cout<<"After Merge Sort => "<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }


    return 0;
}