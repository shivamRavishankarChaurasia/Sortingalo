#include <stdio.h>

void printarray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()

{   int size;
printf("Enter the size of the array:",size);
scanf("%d",&size);
    // int myArr[];
    return 0;
}