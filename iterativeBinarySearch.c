#include<stdio.h>

int binarySearch(int *arr,int low,int high,int key)
{
    while(low<=high)
    {
        int mid = (low+ (high-1))/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {2,6,9,10,11,18,45,89,90,95};
    int size= sizeof(arr)/sizeof(arr[0]);
    printf("%d",binarySearch(arr,0,10,18));
}
