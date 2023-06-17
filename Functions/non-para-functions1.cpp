#include<iostream>
using namespace std;

//void doesn't return anything

int func()
{
    cout<<"This is a test function"<<endl;
}
void func2()
{
    cout<<"func2 top"<<endl;
    func();
    cout<<"func2 bottom"<<endl;
}

int main()
{
    //functions
    // int a,b;
    // cin>>a>>b;
    // int sum=a+b;
    // cout<<sum<<endl;
    cout<<"Before calling of the function"<<endl;
    func2();
    cout<<"After calling of the function"<<endl;
    
}