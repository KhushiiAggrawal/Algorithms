#include<stdio.h>

int linearSearch(int *arr,int key,int size)
{
    int i;
    for(i = 0; i<size ; i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[10] = {2,15,8,12,53,18,0,90,32,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d",linearSearch(arr,90,size));
}
