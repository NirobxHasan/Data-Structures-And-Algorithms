#include <iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int index =0;index<size ;index++){
        cout<<arr[index]<<" ";
    }
    cout<<endl;
}
void insertionSort (int arr[], int size)
{
    int index, item, place;
    for (index = 1; index < size; index++)
    {
        item = arr[index];
        place = index-1;

        while (place >= 0 && arr[place] > item)
        {
            arr[place+1] = arr[place];
            place = place-1;
        }
        arr[place+1] = item;
        printArray(arr, size);
    }
}
int main()
{
    int size = 8;
    int arr[] = {14,33,27,10,35,19,48,44};
    insertionSort(arr, size);

    return 0;
}
