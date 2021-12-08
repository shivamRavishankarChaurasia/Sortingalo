// Insertion sort in c++

#include <iostream>
using namespace std;
void Insertionsort(int arr[], int size)
{
    int i, j , key;
    for(int i=1;i<size;i++){
        key= arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int myArray[size];
    cout << "Enter the element in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> myArray[i];
    }
    cout << "Before sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "  ";
    }
    cout << endl;
    Insertionsort(myArray, size);
    cout << "After Sorting " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "  ";
    }
    return 0;
}