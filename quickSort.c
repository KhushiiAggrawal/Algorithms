#include<stdio.h>

int partition(int *arr,int low,int high)
{
    int i = low;
    int j= high;
    int pivot = arr[low];
    while(i<j)
    {
        do
        {
            i++;
        }
        while(arr[i]<=pivot);
        do
        {
            j--;
        }
        while(arr[j]>pivot);

        // swap both values
        if(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int *arr,int low,int high)
{
    if(low<high)
    {
        int j = partition(arr,low,high);
        quickSort(arr,low,j);
        quickSort(arr,j+1,high);
    }

}

void show (int arr[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d, ",arr[i]);
    }
}
int main()
{
    int arr[10] = {2,15,8,12,53,18,0,90,32,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,10);
    show(arr,size);
}

