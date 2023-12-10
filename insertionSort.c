#include<stdio.h>

void insertionSort(int *arr,int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key = arr[i];
        for(j=i-1;arr[j]>key && j>=0 ;j--)
        {
            arr[j+1] = arr[j];

        }
        arr[j+1] = key;
    }
}

void show (int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
}
int main()
{
    int arr[10] = {2,15,8,12,53,18,0,90,32,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    show(arr,size);
}
