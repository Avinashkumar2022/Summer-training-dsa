//Print the 2D array in a wave like pattern
/*
              -> 
       S|   |   |
        |   |   |
        |   |   |E
          ->

*/


#include<iostream>
using namespace std;

int main() 
{
    //Create a 2D array-
    int arr[3][4];

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
            cout<<arr[column][row]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            
        }
    }

}