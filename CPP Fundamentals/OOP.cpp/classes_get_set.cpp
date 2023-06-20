#include<iostream>
using namespace std;

class Student
{
    private:
    int password=1234;
    public:
    int rollNo;
    string name;
    
    void print(int x)
    {
        cout<<"Print the value :"<<x<<endl;
    }
    int getPassword()
    {
        return password;
    }

    
};
int main()
{
    Student s1,s2;
    s1.name="John";
    cout<<s1.name<<endl;
    s2.name="Danny";
    cout<<s2.name<<endl;
    int pw=s1.getPassword();
    cout<<s1.getPassword()<<endl;
    cout<<pw<<endl;
    
}