#include<bits/stdc++.h>
using namespace std;


class Queue
{
    public:
        int front;
        int rear;
        int size;
        int *arr;

        Queue(int size)
        {
            this->size = size;
            arr = new int [size];
            front = 0;
            rear = 0;
        }

        /*
            This function will check wheter queue is empty or not, if it is empty then it will 
            insert the element and increment the rear otherwise it will return "Queue is full" message. 
        */
        void enqueue(int x)
        {
            if(rear < size)
            {
                arr[rear] = x;
                rear++;
            }
            else
                cout<<"Queue is full "<<endl;
        }

        int dequeue()
        {
            if(front == rear)
            {
                cout<<"Queue is empty "<<endl;
                return -1;
            }
            else
            {
                int x = arr[front];
                front++;
                return x;
            }

        }

        int top()
        {
            if(front != rear)
            {
                int x = arr[front];
                return x;
            }
            else
                return -1;
        }

};


int main()
{
    int n;
    cin>>n;     //entered size is 6;
    Queue q(n);
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.enqueue(45);
    q.enqueue(55);
    q.enqueue(65);
    cout<<"Popped element "<<q.dequeue()<<endl;
    cout<<"Element at front is "<<q.top()<<endl;

   
 

    return 0;
}