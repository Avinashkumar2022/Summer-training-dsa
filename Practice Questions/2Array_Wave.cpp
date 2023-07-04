// Print the elements of a 2D array in a wave like pattern.


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

    //Taking input from the user into the array

    for (int row = 0; row < rows; row++)
    { 
        array2d[row] = new int[columns];
        for (int column = 0; column < columns; column++)
        {
            cin>>array2d[row][column];
        }
        
    }

    //Normal matrix for comparison

    cout<<"The matrix without the alteration:"<<endl;

    for(int column=0;column<columns;column++)
    { 
        for(int row=0;row<rows;row++)
        {
            cout<<array2d[row][column]<<"\t";
        }
        cout<<endl;
    }

    //Sideways wave

    cout<<endl<<endl<<"The matrix with the alteration:"<<endl;
    for(int column=0;column<columns;column++)
    {  
        if(column%2==0)
        {
            for(int row=0;row<rows;row++)
            {
                cout<<array2d[row][column]<<"\t";
            }
        }
        else{
            for(int row=rows-1;row>=0;row--)
            {
                cout<<array2d[row][column]<<"\t";
            }
        }
        cout<<endl;
    }

    //top-down wave

    cout<<endl<<endl<<"The Matrix with another alteration: "<<endl;
      for (int row = 0; row < rows; row++)
    {
        if (row % 2 == 0)
        {
            for (int column = 0; column < columns; column++)
            {
                cout << array2d[row][column] << "\t";
            }
        }
        else
        {
            for (int column = columns - 1; column >= 0; column--)
            {
                cout << array2d[row][column] << "\t";
            }
        }
        cout << endl;
    }


    //Deallocating the memory, not part of the question.
    for (int row = 0; row < rows; row++)
    {
        delete[] array2d[row];
    }
    delete[] array2d;
}