//Find the lasrgest element in the array.

#include<iostream>
#include<limits.h>
using namespace std;

int max_element(int arr[],int size)
{
    int largest=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}

int min_element(int arr[],int size)
{
    int smallest=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<=smallest)
        {
            smallest=arr[i];
        }
    }
    return smallest;
}

int main()
{
    int arr[21]={79, 42, 17, 63, 91,100, 55, 28, 37, 68, 83, 10, 46, 24, 59, 76, 32, 52, 88, 13, 71};
    int largest_element=max_element(arr,21);
    int smallest_element=min_element(arr,21);

    cout<<"The Largest element is:"<<largest_element<<endl;
    cout<<"The Smallest element is:"<<smallest_element;

}