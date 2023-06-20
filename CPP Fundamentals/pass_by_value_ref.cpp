#include<iostream>
using namespace std;

void update(int num)
{
    num++;
}
void refUpdate(int &num)
{
    num++;
}
int main()
{
    int num=5;
    cout<<"Value of num before is: "<<num<<endl;
    update(num);
    refUpdate(num);
    cout<<"Value of num after is: "<<num<<endl;
}