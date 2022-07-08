#include<iostream>
using namespace std;
template<typename T>
class queueusingarray{
T *data;
int size;
int nextindex;
int firstindex;
int capacity;

public:
queueusingarray(int s)
{
    data=new T;
    size=0;
    nextindex=0;
    firstindex=-1;
    capacity=s;
}

int getSize()
{
    return size;
}
bool isempty()
{
    return size==0;
}
void enque(T element)
{
    if(size==capacity)
    {
        T *newdata= new T(2*capacity);
        int j=0;
        for(int i=firstindex;i<capacity;i++)
        {
            newdata[j]=data[i];
            ++j;
        }
        for(int i=0;i<firstindex;i++)
        {
            newdata[j]=data[i];
        ++j;
        }
        delete[] data;
        data=newdata;
        firstindex=0;
        nextindex=capacity;
        capacity=2*capacity;
    }
    data[nextindex]=element;
    nextindex=(nextindex+1)%capacity;
    if(firstindex==-1)
    {
        firstindex=0;
    }
    size++;
}
T deque()
{
    if(firstindex==-1)
    {
        cout<<"Queue is empty!!! "<<endl;
        return -1;
    }
    T element=data[firstindex];
    firstindex=(firstindex+1)%capacity;
  size--;   
  if(size==0)
  {
    firstindex=-1;
    nextindex=0;
  }
  return element;
}

};



int main()
{
    queueusingarray<int> q1(5);
    q1.enque(3);
    q1.enque(4);
    q1.enque(5);
    q1.enque(5);
    q1.enque(6);
    q1.enque(7);
    int a;
    a=q1.deque();
    cout<<a<<endl;
    a=q1.deque();
    cout<<a<<endl;
    // a=q1.deque();
    // cout<<a<<endl;
    // a=q1.deque();
    // cout<<a<<endl;
    // a=q1.deque();
    // cout<<a<<endl;
    // a=q1.deque();
    // cout<<a<<endl;
    return 0;
}