#include <iostream>
#include <vector>
using namespace std;
void PrintVector(vector<int>& vec,int size){

    for(int index =0;index<size ;index++){
        cout<<vec[index]<<" ";
    }
    cout<<endl;
}
void merge(vector<int>& a, int left_low, int left_high,  int right_high)
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

void mergeSort(vector<int>& vec,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(vec,low,mid);
        mergeSort(vec,mid+1,high);
        merge(vec,low,mid,high);
    }
}

int main(int argc, char *argv[])
{
    cout<<"dj";
    vector<int> vec;
    vec.push_back(14);
    vec.push_back(33);
    vec.push_back(27);
    vec.push_back(10);
    vec.push_back(35);
    vec.push_back(19);
    vec.push_back(48);
    vec.push_back(44);

    int size=vec.size();
    mergeSort(vec,0,  size-1);
    PrintVector(vec,size);
    return 0;
}
