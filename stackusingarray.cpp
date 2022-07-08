#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
class stackusingarray{
int *data;
int nextindex;
int capacity;
public:
stackusingarray(int totalsize)
{
    int *data=new int[totalsize];
    nextindex=0;
    capacity=totalsize;
}
bool isempty()
{
    return nextindex==0;
}

void push(int d)
{
    if(nextindex==capacity)
  {

cout<<"stack is already full!!"<<endl;
    return;
}
    data[nextindex]=d;
    nextindex++;
}
int top()
{
    return data[nextindex-1];
}
int pop()
{
    if(isempty())
    {
       cout<<"Stack is empty!!"<<endl;
        return INT16_MIN;
    }
    nextindex--;
    return data[nextindex];
}
int size()
{
    return nextindex;
}
};