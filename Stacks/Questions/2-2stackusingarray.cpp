#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
        int top1;
        int top2;
        int *arr;
        int size;

        Stack(int size)
        {
            this->size = size;
            arr = new int[size];
            top1 = -1;
            top2 = size;
        }

        //isempty function will return true if stack is empty else it will return false
        bool isempty1()
        {
            if(top1 == -1)
                return true;
            else
                return false;
        }

        bool isempty2()
        {
            if(top2 == size)
                return true;
            else
                return false;
        }
        //Before inserting any element, push function will check whether stack is full or not,
        //If it not full then the element will be inserted or else Stack is full message will be displayed
        void push1(int x)
        {
            if(size-top1 > 1 && top2-top1 > 1)
            {
                top1++;
                arr[top1] = x;
            }
            else
                cout<<"Stack is full"<<endl;

        }

          void push2(int x)
        {
            if(size-top1 > 1 && top2-top1 > 1)
            {
                top2--;
                arr[top2] = x;
            }
            else
                cout<<"Stack is full"<<endl;

        }
        /*Before removing any element, the pop function will check whether stack contains any element or not
          If it contains then the top most element will be removed, if not Stack empty message will be displayed  
        */
        int pop1()
        {
            int x = -1;
            if(top1 > -1)
            {   x = arr[top1];
                top1--;
                return x;
            }
            else
            {
                cout<<"Stack underflow "<<endl;
                return -1;
            }    
        }

        int pop2()
        {
            int x = -1;
            if(top2 < size)
            {   x = arr[top2];
                top2++;
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
        int peek1()
        {
            if(top1 > -1 && top1 < size)
                return arr[top1];
            else
            { 
                cout<<"Stack is empty "<<endl;
                return -1;
            }
        }

        int peek2()
        {
            if(top2 > -1 && top2 < size)
                return arr[top2];
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

    s.push1(5);
    s.push1(10);
    s.push2(15);
    s.push2(20);
    s.push2(25);
    s.push2(30);
    s.push1(35);
    cout<<"Element on top1 "<<s.peek1()<<endl;
    cout<<"Element on top2 "<<s.peek2()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop2()<<endl;


    return 0;
}