#include<iostream>
using namespace std;
template<typename t>
class node{
    public:
    t data;
    node<t> *next;
    node(t data){
        this->data=data;
        next=NULL;
    }
} ;

template<typename t>
class stack{
node<t> *head;
int size;
public:
stack(){
    head=NULL;
    size=0;
}
int sizeofstack(){
    return size;
}
void push(int element)
{
    node<t> *newnode= new node<t>(element);
    newnode->next=head;
    head=newnode;
size++;
}
t pop(){
    t a=head->data;
    node<t> *temp=head;
    head=head->next;
    delete temp;
    size--;
    return a;
}
bool is_mt()
{
    return size==0;
}
t top()
{
    if(is_mt())
    return 0;
    return head->data;
}

};


int main()
{

    stack<int> s1;
    s1.push(10);   
    s1.push(20);   
    s1.push(30);   
    s1.push(10);   
    s1.push(60);   
    s1.push(30);
    cout<<endl;
    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.top()<<endl;
    cout<<s1.is_mt()<<endl;


    return 0;
}