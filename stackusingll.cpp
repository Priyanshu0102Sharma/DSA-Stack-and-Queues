#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class stack{
    Node*head;
    Node*tail;
    int size;
public:
stack(){
head=NULL;
tail=NULL;
size=0;
}
void push(int element)
{
    Node* newnode= new Node(element);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
    }
    ++size;
}
bool is_mt()
{
    return size==0;
}
 int sizeofstack(){
     return size;
 }
 void pop(){
     Node*temp=head;
     while(temp->next!=tail)
     {
         temp=temp->next;
     }
     temp->next=tail->next;
     Node*a=tail;
     delete a;
     tail=temp;
    

 }

 int top(){
     return tail->data;
 }
};


int main(){
    stack s1;
    s1.push(10);
    s1.push(6);
    cout<<s1.top();
    return 0;   
}