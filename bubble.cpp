#include<iostream>
using namespace std;
int main(){
    int size =0 ;
    cout<<"The size of the given array :"<<endl;
    cin>>size;
    int arr[size];
    
    cout<<"Enter the element in the array:"<<endl;
    for (int i = 0; i < size; i++)
    {
    cin>>arr[i];
        
    }
    cout<<"The element in the array are :"<<endl;
    for (int i = 0; i < size ;i++)
    {
       cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
    cout<<"After the bubble sort "<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
    }
    
    
    return 0;

}