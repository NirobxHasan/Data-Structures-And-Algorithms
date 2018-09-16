#include <iostream>
#include <vector>
using namespace std;
void swap(int &item1, int &item2)
{
    int temp = item1;
    item1 = item2;
    item2 = temp;
}
void PrintVector(vector<int>& vec,int size){

    for(int index =0;index<size ;index++){
        cout<<vec[index]<<" ";
    }
    cout<<endl;
}
void selectionSort(vector<int>& vec,int size){
    int min;
    for(int index1 = 0; index1<size-1; index1++){
        min = index1;
        for(int index2 = index1+1;index2<size;index2++){
            if(vec[min]>vec[index2]) min = index2;

        }
         swap(vec[index1],vec[min]);
         PrintVector(vec,size);

    }
    PrintVector(vec,size);
}
int main(int argc, char *argv[])
{
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
    selectionSort(vec,size);

    return 0;
}
