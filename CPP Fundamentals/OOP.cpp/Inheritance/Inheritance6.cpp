#include<iostream>
using namespace std;

// When all the other types of inheritance is used at the same time.


class A
{

};

class D
{

};

class B:public A{

};
class C:public A,public D{

};


class E:public B{

};

int main()
{

}