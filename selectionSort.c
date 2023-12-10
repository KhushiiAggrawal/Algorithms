#include<stdio.h>

void selectionSort(int *arr,int size)
{
    int i,j,min;
    for(int i=0;i<size-1;i++)
    {
        int min = i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = arr[i];
            arr[i]= arr[min];
            arr[min] = temp;
        }
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
    selectionSort(arr,size);
    show(arr,size);
}

