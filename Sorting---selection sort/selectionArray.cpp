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
void selectionSort(int arr[],int size){
    int min;
    for(int index1 = 0; index1<size-1; index1++){
        min = index1;
        for(int index2 = index1+1;index2<size;index2++){
            if(arr[min]>arr[index2]) min = index2;

        }
         swap(arr[index1],arr[min]);
         printArray(arr,size);

    }
    printArray(arr,size);
}

int main(int argc, char *argv[])
{
    int size = 8;

    int arr[]= {10,33,27,14,35,19,48,44};

    selectionSort(arr,size);

    return 0;
}
