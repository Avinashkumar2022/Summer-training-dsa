//WAP to take two integer inputs from the user and output their sum.

#include<iostream>
using namespace std;
int main()
{
    int input1,input2;
    cout<<"Enter the first number: ";
    cin>>input1;
    cout<<endl<<"Enter the second number: ";
    cin>>input2;
    cout<<"The difference between the given two numbers is: "<<input1-input2<<endl;
    cout<<"The sum of the given two numbers is: "<<input1+input2<<endl;
    cout<<"The multiplication of the given two numbers is: "<<input1*input2<<endl;
    cout<<"First number divided by second number is: "<<(float)input1/input2<<endl;
    cout<<"Second number divided by first number is: "<<(float)input2/input1;



}