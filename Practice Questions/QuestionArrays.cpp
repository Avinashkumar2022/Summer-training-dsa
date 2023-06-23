#include<iostream>
using namespace std;

void reverse_array(int arr[],int size)
{
    int start,end;
    
    start=0;
    end=size-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<endl;
    
    reverse_array(arr,10);

     for(int i=0; i<10;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}