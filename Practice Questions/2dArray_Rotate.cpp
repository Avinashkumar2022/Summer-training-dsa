//WAP for Rotating the given 2D array by 90,180,270 degrees.

#include<iostream>
using namespace std;

void rotate(int** array,int rows, int columns)
{
    int left=0;
    int right=columns-1;
    int top=0;
    int bottom=rows-1;

    while(left<=right)
    {
        for(int i=bottom;i>=top;i--)
        {
            cout<<array[i][left]<<"\t";
        }
        left++;
        cout<<"\n";
    }


}

int main()
{


    int rows, columns,angle;
    cout<<"Enter total number of rows: ";
    cin>> rows;
    cout<<"Enter total number of columns: ";
    cin>> columns;

    cout<<"Enter the angle by which the array is to be rotated: ";
    cin>>angle;

    int** array2d=new int*[rows];



    for (int row = 0; row < rows; row++)
    {
        array2d[row] = new int[columns];
        for (int column = 0; column < columns; column++)
        {
            cin>>array2d[row][column];
        }
        
    }

    cout<<"Normal Matrix: "<<endl;

    for(int row=0;row<rows;row++)
    { 
        for(int column=0;column<columns;column++)
        {
            cout<<array2d[row][column]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<"The matrix after rotating by 90 degrees: "<<endl;
    rotate(array2d,rows,columns);



}