#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>s;
    int flag=1;
    string st="{a+(b*c)}}";
    for(int i=0;i<st.length();i++){

if(s.empty()&& (st[i]=='}'||st[i]==')'||st[i]==']'))
{
    cout<<"it is not in paranthesis "<<endl;
    flag=0;
    break;
}

        if(st[i]=='{'||st[i]=='['||st[i]=='(')
        {
            s.push(st[i]);
        }
        char b=s.top();
        if(st[i]=='}'&& b=='{')
        {
            s.pop();
        }
        if(st[i]==']'&& b=='[')
        {
            s.pop();
        }
        if(st[i]==')'&& b=='(')
        {
            s.pop();
        }
    }
    if(s.empty()&&flag==1)
    cout<<"it is in paranthesis"<<endl;
    else
    cout<<"it is not in paranthesis"<<endl;
    return 0;
}