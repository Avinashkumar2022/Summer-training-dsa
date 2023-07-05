#include<iostream>
using namespace std;

unsigned long long factorial(unsigned long long num)
{
    //base condition
    if(num==0)
    {
        return 1;
    }

    return num*factorial(num-1);

}

int main()
{
    long long number;
    cout<<"Enter a number: ";
    cin>>number;

    cout<<"The factorial of given number is: "<<factorial(number);
}