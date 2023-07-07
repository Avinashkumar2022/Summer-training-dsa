#include<iostream>
using namespace std;

void merge(int* arr,int left,int right)
{
    int mid=left+((right-left)/2);
    int lenght1=mid-left+1;
    int length2=right-mid;

    int* first=new int[lenght1];
    int* second=new int[length2];

    int pointer=left;
    for(int i=0;i<lenght1;i++)
    {
        first[i]=arr[pointer++];
    }

    pointer=mid+1;
    for(int i=0;i<length2;i++)
    {
        second[i]=arr[pointer++];
    }


}

void mergeSort(int* array,int left,int right)
{
    if(left==right)
    {
        return;
    }
    int mid=left+((right-left)/2);

    //sort the left side
    mergeSort(array,left,mid);

    //sort the right side
    mergeSort(array,mid+1,right);

    //merge the array again
    merge(array,left,right);
}

int main()
{
    int size;
    cout<<"Enter the total number of elements in the array: ";
    cin>>size;

    int* array=new int[size];

    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    mergeSort(array,0,size-1);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    delete[] array;
}