#include<iostream>
using namespace std;

int even(int arr[],int size)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            flag++;
        }
    }
    return flag;
}

int main()
{
    int arr[20]={79, 42, 17, 63, 91, 55, 28, 37, 68, 83, 10, 46, 24, 59, 76, 32, 52, 88, 13, 71};
    int flag=even(arr,20);

    if(flag==0)
    {
        cout<<"There is no even numbers";
    }
    else cout<<"The number of even numbers in the array is: "<<flag<<endl;
}