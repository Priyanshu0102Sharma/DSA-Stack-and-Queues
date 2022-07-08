#include <iostream>
using namespace std;
template <typename T>
class Node
{

public:
    
        T data;
        Node<T> *next;

        Node(T data)
        {
            this->data = data;
            next = NULL;
        }
    
};

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getsize()
    {
        return size;
    }

    void enque(T element)
    {
        Node<T> *newnode = new Node<T>(element);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }

        ++size;
    }

    T deque()
    {

        T a = head->data;
        Node <T>*aisehi ;
        aisehi= head;
        head = head->next;
        delete aisehi;
        --size;
        return a;
    }

    T front()
    {
        return head->data;
    }

    bool isempty()
    {
        return size == 0;
    }
};
int main()
{

    Queue<int> q1;
    q1.enque(5);
    q1.enque(1);
    q1.enque(3);
    q1.enque(4);
    q1.enque(2);
    cout<<q1.front()<<endl;
    cout << q1.deque() << endl;
    cout << q1.deque() << endl;
    cout << q1.deque() << endl;
    // output:
    /*
    5 5 1 3
    */

    return 0;
}