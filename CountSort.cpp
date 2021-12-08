// Count Sort Algorithm
/*
#include <iostream>
using namespace std;
void CountSort(int arr[], int n)
{
    int k = arr[0]; //maximum element
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

int count[10] = {0};
for (int i = 0; i < n; i++)
{
    count[arr[i]]++;
}
for (int i = 1; i <= k; i++)
{
    count[i] += count[i - 1];
}
int output[n];
for (int i = n - 1; i >= 0; i--)
{
    output[--count[arr[i]]] = arr[i];
}

for (int i = 0; i < n; i++)
{
    arr[i] = output[i];
}
}
int main()
{
int arr[]={1,3,2,4,1,5,6,7,};
for (int i = 0; i < 9; i++)
{
   cout<<arr[i]<<" ";
}

    return 0;
}
*/

#include <iostream>
using namespace std;

void CountSort(int input_array[], int s, int r)
{
    // int input_array[s];
    int output_array[s];
    int count_array[r];

    // initialize all the elements to 0 in the count array
    for (int i = 0; i < r; i++)
    {
        count_array[i] = 0;
    }

    // to take the count of all the elements in the input array
    for (int i = 0; i < s; i++)
    {
        ++count_array[input_array[i]];
    }
    // cummalative count of count array to get the positions of elements
    // to be sorted in the output array
    for (int i = 1 ; i < r; i++)
    {
        count_array[i] = count_array[i] + count_array[i - 1];
    }
    for (int i = 0; i < s; i++)
    {
        output_array[--count_array[input_array[i]]] = input_array[i];
    }
    // copy output element to the input array
    for (int i = 0; i < s; i++)
    {
       input_array[i] = output_array[i];
    }
}
    int main()
    {
        int size=0;
        int range = 10;
        cout << "Enter the size of the array :" << endl;
        cin >> size;
        int myArr[size];
        cout << "Enter " << size << " elements in the array:" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> myArr[i];
        }
       
        cout << "Before Count sort : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << myArr[i] << "  " ;
        }
        cout<<endl;

        CountSort(myArr, size, range);

        cout << "After Count Sort :"<<endl;
        for (int i = 0; i < size; i++)
        {
            cout << myArr[i] << "  ";
        }

        return 0;
    }


//     # include <iostream>
// using namespace std;
// // counting sort sorting algorithm
// void CountingSort(int input_array[],int s, int r)
// {
// 	int output_array[s];
// 	int count_array[r];
	
// 	// initialize all elements to 0 in count array
// 	for(int i=0;i<r;i++)
// 		count_array[i]=0;
		
// 	// to take a count of all elements in the input array
// 	for(int i=0;i<s;i++)
// 		++count_array[input_array[i]];
	
// 	// cummulative count of count array to get the 
// 	// positions of elements to be stored in the output array
// 	for(int i=1;i<r;i++)
// 		count_array[i]=count_array[i]+count_array[i-1];
	
// 	// placing input array elements into output array in proper
// 	//  positions such that the result is a sorted array in ASC order
// 	for(int i=0;i<s;i++)
// 		output_array[--count_array[input_array[i]]] = input_array[i];
	
// 	// copy output array elements to input array
// 	for(int i=0;i<s;i++)
// 		input_array[i]=output_array[i];
// }

// int main()
// {
// 	int size=0;
// 	int range = 10;
// 	cout<<"Enter Size of array: "<<endl;
// 	cin>>size;
// 	int myarray[size];
// 	cout<<"Enter "<<size<<" integers in any order in range of 0-9: "<<endl;
// 	for(int i=0;i<size;i++)
// 	{
// 		cin>>myarray[i];
// 	}
// 	cout<<"Before Sorting"<<endl;
// 	for(int i=0;i<size;i++)
// 	{
// 		cout<<myarray[i]<<" ";
// 	}
// 	cout<<endl;
// 	CountingSort(myarray,size,range);  // counting sort called
// 	cout<<"After Sorting"<<endl;
// 	for(int i=0;i<size;i++)
// 	{
// 		cout<<myarray[i]<<" ";
// 	}
// 	return 0;
// }