#include<iostream>
using namespace std;

int power(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }

    //recursive relation

    // int smallProblem=power(n-1);
    // int bigProblem=2*smallProblem;
    // return bigProblem;

    return 2*power(n-1);
}

int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    cout<<power(number);
}