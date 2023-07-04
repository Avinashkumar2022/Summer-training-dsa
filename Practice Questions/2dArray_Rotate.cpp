#include<iostream>
using namespace std;

int main()
{


    int rows, columns;
    cout<<"Enter total number of rows: ";
    cin>> rows;
    cout<<"Enter total number of columns: ";
    cin>> columns;

    int** array2d=new int*[rows];



    for (int row = 0; row < rows; row++)
    {
        array2d[row] = new int[columns];
        for (int column = 0; column < columns; column++)
        {
            cin>>array2d[row][column];
        }
        
    }


    for(int row=0;row<rows;row++)
    { 
        for(int column=0;column<columns;column++)
        {
            cout<<array2d[row][column]<<"\t";
        }
        cout<<endl;
    }
}