#include<iostream>
#include<stack>
using namespace std;

void atBottom(stack<int> &st,int size,int count)
{
    if(st.empty() || count==size-1)
    {
        st.pop();
        return;
    }
    int temp=st.top();
    st.pop();

    return atBottom(st,size-1,count++);
} 

int main()
{

}