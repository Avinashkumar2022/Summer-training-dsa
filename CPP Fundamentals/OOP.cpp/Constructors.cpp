#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;

    //Default Constructor
    Student()
    {
        cout << "Constructor invoked "<<endl;
    }
    Student(int _age,string _name)
    {
        age=_age;
        name=_name;
    }

    Student(int myAge)
    {
        age=myAge;
    }

    Student(Student &obj)
    {
        age=obj.age;
    }

    ~Student()
    {
        cout<<"Destructor invoked"<<endl;
    }
};

//Method with same name as the class and has no parameters is known as default Constructors.
//Methods with same name as the class is known as a Constructor.
//Constructors with parameters is known as parameterised constructors.
//Copy constructors copies the values of other objects.

int main()
{
    Student s1;
    Student s2;
    Student s3(11,"Avinash");
    cout<<s3.age<<endl;

    Student s4(2);
    cout<<s4.age<<endl;

    Student s5(s4);
    cout<<"s5: "<<s5.age<<endl;
    cout<<"HI"<<endl;
}