#include<iostream>
using namespace std;

long long fibonacci(long long num)
{
    if(num==0)
    {
        return 0;
    }
    if(num==1 || num==2)
    {
        return 1;
    }

    return fibonacci(num-1)+fibonacci(num-2);
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    cout<<"Fibonacci series until the given number is: "<<fibonacci(number);
}