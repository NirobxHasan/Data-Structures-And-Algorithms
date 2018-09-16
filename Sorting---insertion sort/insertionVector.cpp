#include <iostream>
#include <vector>
using namespace std;
void PrintVector(vector<int>& vec,int size){

    for(int index =0;index<size ;index++){
        cout<<vec[index]<<" ";
    }
    cout<<endl;
}
void insertionSort (vector<int>& vec, int size)
{
    int index, item, place;
    for (index = 1; index < size; index++)
    {
        item = vec[index];
        place = index-1;

        while (place >= 0 && vec[place] > item)
        {
            vec[place+1] = vec[place];
            place = place-1;
        }
        vec[place+1] = item;
        PrintVector(vec, size);
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

    int size=8;
    insertionSort(vec,size);
    return 0;
}
