#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int i=l;
    int j=m+1;
    int k=l;
    vector<int>vec(10);
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            vec.push_back(arr[i]);
            i++;
            k++;
        }
        else{
            vec.push_back(arr[j]);
            j++;
            k++;
        }
    }
    while(i<=m){
        vec.push_back(arr[i]);
        i++;
        k++;
    }
    while(m<=r){
        vec.push_back(arr[j]);
        j++;
        k++;
    }
    for(int p=0;p<10;p++){
       vec.push_back(arr[i]);
    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int size = 10;
    cout<<"Enter the size of the array => "<<endl;
cin>>size;
int arr[size];
cout<<"Enter the element in the array => "<<endl;
for(int i=0;i<10;i++){
    cin>>arr[i];
}
cout<<endl;
cout<<"Before Merge Sort => "<<endl;
for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
mergeSort(arr,0,9);
cout<<"After  Merge Sort => "<<endl;
for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;

    return 0;
}