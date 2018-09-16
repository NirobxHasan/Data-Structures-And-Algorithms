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
void bubbleSort (vector<int>& vec, int size)
{
    int index1, index2;
    for(index1=1; index1<size; index1++)
    {
        for(index2=0; index2<(size-index1); index2++){
            if(vec[index2]>vec[index2+1])
            {
                swap(vec[index2],vec[index2+1]);
                PrintVector(vec, size);
            }

        }
    }

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
    bubbleSort(vec,size);
    return 0;
}
