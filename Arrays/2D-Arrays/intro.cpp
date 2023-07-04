#include<iostream>
using namespace std;

int main()
{
    //Create a 2D array-
    // int arr[3][4];
    // int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int rows, columns;
    cout<<"Enter total number of rows: ";
    cin>> rows;
    cout<<"Enter total number of columns: ";
    cin>> columns;

    int** array2d=new int*[rows];



    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            cin>>array2d[row][column];
        }
        
    }


    for(int column=0;column<columns;column++)
    { 
        for(int row=0;row<rows;row++)
        {
            cout<<array2d[row][column]<<"\t";
        }
        cout<<endl;
    }
}