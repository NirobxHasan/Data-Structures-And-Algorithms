#include <iostream>
using namespace std;
void swap(int &item1, int &item2)
{
    int temp = item1;
    item1 = item2;
    item2 = temp;
}
void printArray(int arr[],int size){

    for(int index =0;index<size ;index++){
        cout<<arr[index]<<" ";
    }
    cout<<endl;
}

void bubbleSort (int arr[], int size)
{
    int index1, index2;
    for(index1=1; index1<size; index1++)
    {
        for(index2=0; index2<(size-index1); index2++){
            if(arr[index2]>arr[index2+1])
            {
                swap(arr[index2],arr[index2+1]);
                printArray(arr, size);
            }

        }
    }

}
int main()
{
    int size = 8;
    int arr[] = {10,33,27,14,35,19,48,44};
    bubbleSort(arr,size);

    return 0;
}
