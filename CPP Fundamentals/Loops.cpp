#include<iostream>
using namespace std;
int main()
{
    //Loops are used to execute a part of the code repetitively

    /* for(start;terminate;increment/decrement)
    {
        BODY
    }
    */


    for(int i=1;i<15;i++)
    {
        cout<<i<<" ";
    }
    for(int i=0; i<=10;i++)
    {
        cout<<i+2<<"  ";
        if(i==5)
        {
            break;
        }
        if(i==4)
        {
            continue;
        }
        cout<<i-2<<"  ";
    }


}