#include<iostream>
using namespace std;

class myClass
{
    public:
    int num;
    string text;
    void myFunc()
    {
        cout<<"Function of myClass";
    }
    int add(int num1,int num2)
    {
        int ans=num1+num2;
        return ans;
    }

    private:
    int num2;
    string text2;

};

//All the elements inside a class are private by default.

int main()
{

    myClass class1;
    myClass class2;
    class1.num;
    class1.myFunc();
    cout<<class1.add(2,3)<<endl;
    cout<<class2.add(4,7)<<endl;
    cout<<class1.add(5,4)<<endl;
    
}