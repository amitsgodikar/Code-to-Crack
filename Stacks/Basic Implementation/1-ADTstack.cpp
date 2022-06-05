#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
        int top;
        int *arr;
        int size;

        Stack(int size)
        {
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        //isempty function will return true if stack is empty else it will return false
        bool isempty()
        {
            if(top == -1)
                return true;
            else
                return false;
        }

        //Before inserting any element, push function will check whether stack is full or not,
        //If it not full then the element will be inserted or else Stack is full message will be displayed
        void push(int x)
        {
            if(size-top > 1)
            {
                top++;
                arr[top] = x;
            }
            else
                cout<<"Stack is full"<<endl;

        }
        /*Before removing any element, the pop function will check whether stack contains any element or not
          If it contains then the top most element will be removed, if not Stack empty message will be displayed  
        */
        int pop()
        {
            int x = -1;
            if(top > -1)
            {   x = arr[top];
                top--;
                return x;
            }
            else
            {
                cout<<"Stack underflow "<<endl;
                return -1;
            }    
        }

        /*Peek function will display the top most element in the stack with removing it from the stack
          If Stack is empty it will show -1.
        */
        int peek()
        {
            if(top > -1 && top < size)
                return arr[top];
            else
            { 
                cout<<"Stack is empty "<<endl;
                return -1;
            }
        }
};



int main()
{
    int n;
    cin>>n;
    Stack s(n);

    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
   
    cout<<"Element popped "<<s.pop()<<endl;

    cout<<"Empty or not "<<s.isempty()<<endl;

    cout<<"Element on top is "<<s.peek()<<endl;

    cout<<"Element popped "<<s.pop()<<endl;
    cout<<"Empty or not "<<s.isempty()<<endl;
    cout<<"Element on top is "<<s.peek()<<endl;

    cout<<"Element popped "<<s.pop()<<endl;
    cout<<"Empty or not "<<s.isempty()<<endl;
    cout<<"Element on top is "<<s.peek()<<endl;


    return 0;
}
