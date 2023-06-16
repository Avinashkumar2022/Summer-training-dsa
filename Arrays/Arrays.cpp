#include<iostream>
using namespace std;
int main()
{
    
    // string str_arr[5]={"Avinash","Anshu","Mimangsha","Nikhil","Nidhi"};
    // int length=sizeof(str_arr)/sizeof(int);
    // for(int i=0;i<length;i++)
    // {
    //     cout<<str_arr[i];
    // }
    
    int arr[10]={3,-3,5,-11,0,13,19,-4,6,8};
    int length=sizeof(arr)/sizeof(int);
    int positive=0;
    int negative=0;
    int odd=0;
    int even=0;
    int zero=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]<0)
        {
            negative++;
        }
        else if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }
        else if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    cout<<"positive numbers: "<<positive<<endl;
    cout<<"negative numbers: "<<negative<<endl;
    cout<<"zeroes: "<<zero<<endl;
    cout<<"even numbers: "<<even<<endl;
    cout<<"odd numbers: "<<odd;


}

//A test comment for git 