#include<iostream>
using namespace std;

void name(string myName="Dummy")
{
    cout<<"My name is " <<myName<<endl;
}

int sum(int num1,int num2)
{
    int ans=num1+num2;
    return ans;
}

int sum(int num1,int num2,int num3)
{
    int ans=num1+num2+num3;
    return ans;
}

int sum(float num1,float num2)
{
    float ans=num1+num2;
    return ans;
}
//Method Overloading:- methods with same name but different signatures 
int main()
{
    name("Avinash");
    cout<<"The sum1 is "<<sum(4,5)<<endl;
    cout<<"The sum2 is "<<sum(10,5,1);
    
}