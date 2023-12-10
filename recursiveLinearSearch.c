#include<stdio.h>

int linearSearch(int *arr,int key,int size)
{
    while(size>0)
    {
        if(arr[size]==key)
        {
            return size;
        }
        return linearSearch(arr,key,size-1);
    }
    return -1;
}

int main()
{
    int arr[10] = {2,5,8,12,53,18,0,90,32,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d",linearSearch(arr,54,size-1));
}
