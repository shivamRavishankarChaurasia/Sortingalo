// OPtimise Bubble sort take 3 rounds because flag variable check where the array is sorted or not
// if yes then break
// O()

#include<bits/stdc++.h>
using namespace std;
void OptimiseBubbleSort(int arr[],int size){
    int i,j,flag;
    int round=0;
    for(int i=0;i<size;i++){
        round++;
        // flag=false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                // flag=true;
                swap(arr[j],arr[j+1]);
            }
        }
        // if(flag==false){
        //     break;
        // }
    }
    cout<<"No of rounds => "<< round<<endl;
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
    OptimiseBubbleSort(arr,size);
    cout<<"After Bubble sort =>  ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}