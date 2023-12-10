#include<stdio.h>

void bubbleSort(int *arr,int size)
{
    int i,j,isSwapped;
    for(i=0;i<size;i++)
    {
        isSwapped = 0;
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                isSwapped = 1;
            }
        }
        if(isSwapped == 0 )
        {
            return;
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
    bubbleSort(arr,size);
    show(arr,size);
}

