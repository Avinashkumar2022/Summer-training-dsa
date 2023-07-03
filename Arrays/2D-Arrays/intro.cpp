#include<iostream>
using namespace std;

int main()
{
    //Create a 2D array-
    int arr[3][4];
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};


/*
    Row wise traversal of the 2D array

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cin>>arr[row][column];
        }
        
    }
*/

/*
    Column wise traversal in 2D array
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cin>>arr[column][row];
        }
    }
    
*/

    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            cout<<arr[row][column]<<"\t";
        }
        cout<<endl;
    }
}