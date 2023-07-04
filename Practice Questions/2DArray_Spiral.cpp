#include<iostream>
using namespace std;

void spiral(int** array,int rows,int columns)
{
    int top_Row=0;
    int bottom_Row=rows-1;
    int left_Column=0;
    int right_Column=columns-1;

    
    cout<<"The matrix printed in a spiral: "<<endl;

    while(top_Row <= bottom_Row && left_Column <= right_Column)
    {
        for(int i=left_Column;i<=right_Column;i++)
        {
            cout<<array[top_Row][i]<<"\t";
        }
        // cout<<endl;
        top_Row++;

        for(int i=top_Row;i<=bottom_Row;i++)
        {
            cout<<array[i][right_Column]<<"\t";
        }
        // cout<<endl;
        right_Column--;

        for(int i=right_Column;i>=left_Column;i--)
        {
            cout<<array[bottom_Row][i]<<"\t";
        }
        // cout<<endl;
        bottom_Row--;

        for(int i=bottom_Row;i>=top_Row;i--)
        {
            cout<<array[i][left_Column]<<"\t";
        }
        // cout<<endl;
        top_Row++;

    }
}

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


    cout<<endl<<endl<<"The matrix printed normally"<<endl;

    for(int row=0;row<rows;row++)
    { 
        for(int column=0;column<columns;column++)
        {
            cout<<array2d[row][column]<<"\t";
        }
        cout<<endl;
    }


    spiral(array2d,rows,columns);
}