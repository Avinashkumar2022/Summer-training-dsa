#include<iostream>
#include<stack>

using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    
    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(i!=' ' && i<s.length())
        {
            word+=s[i];
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    

}

int main()
{
    string inputString;
    cout<<"Enter the string that you want to reverse: ";
    cin>>inputString;

    reverseSentence(inputString);
    return 0;
}