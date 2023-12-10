#include<stdio.h>

void merge(int *arr,int low,int mid,int high)
{
    int l[high-mid],r[mid-low+1],i,j,x;
    for(i=0 ; i<mid-low+1;i++)
    {
        l[i] = arr[low+i];
    }
    for(i=0 ; i<high-mid;i++)
    {
        r[i] = arr[mid+i+1];
    }

    // making the merged array
    i=0,j=0;
    for(x=low;i<mid-low+1 && j<high-mid ;x++)
    {
        if(l[i]<r[j])
        {
            arr[x]=l[i];
            i++;
        }
        else{
            arr[x]=r[j];
            j++;
        }

    }

    // adding all remaining elements
    if(i>mid){
        while(j<high-mid){
        arr[x]=r[j];
        j++;
        x++;
    }
    }else{
    while(i<mid-low+1){
        arr[x]=l[i];
        i++;
        x++;
    }}



}

void mergeSort(int *arr,int low,int high)
{
    if(low<high)
    {
        int mid = (low + (high-1))/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
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
    mergeSort(arr,0,9);
    show(arr,size);
}
