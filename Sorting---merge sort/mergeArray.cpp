#include<iostream>
#include<stdlib.h>

using namespace std;
void printArray(int arr[],int size){

    for(int index =0;index<size ;index++){
        cout<<arr[index]<<" ";
    }
    cout<<endl;
}

void merge(int a[], int left_low, int left_high,  int right_high)
{
    int right_low=left_high+1;
    int length = right_high-left_low+1;
    int temp[length];
    int left = left_low;
    int right = right_low;
    for (int i = 0; i < length; ++i) {
        if (left > left_high)
            temp[i] = a[right++];
        else if (right > right_high)
            temp[i] = a[left++];
        else if (a[left] <= a[right])
            temp[i] = a[left++];
        else
            temp[i] = a[right++];
    }

    for (int i=0; i< length; ++i)
        a[left_low++] = temp[i];
}
void mergeSort(int *array, int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array, low, mid, high);


    }
}

int main()
{

    int size = 8;
    int arr[] = {14,33,27,10,35,19,48,44};

    mergeSort(arr,0,  size-1);
    printArray(arr,size);
    return 0;
}
