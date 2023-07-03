#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    //Create a 2D array-
    int arr[3][4];

    int sum=0,largest_sum=INT_MIN,largest_row;
    cout<<"Enter the elements of the array: "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cin>>arr[row][column];
        }
        
    }

    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            cout<<arr[row][column]<<"\t";
        }
        cout<<endl;
    }

    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            sum=sum+arr[row][column];
        }
        cout<<"The sum of row "<<row<<" is: "<<sum<<endl;
        if(largest_sum<sum)
        {
            largest_sum=sum;
            largest_row=row;
        }
        sum=0;
    }

    cout<<"The row with the largest sum is: "<<largest_row+1;
}