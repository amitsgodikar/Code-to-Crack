#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void inserAtTail(Node* &tail, int d)
{
    Node *temp = new Node(d);
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
}

void inserAtPosition(Node* &head, Node* &tail, int d, int pos)
{
    int count = 0;
    Node* t = head;
    while(t != NULL)
    {
        count++;
        t = t->next; 
    }
    if(pos<0 || pos>count+1)
        cout<<"Invalid position"<<endl;   
    else
    {
        if(pos == 1)
        {
            insertAtHead(head, d);
        }
        else if(pos == count+1)
        {
            inserAtTail(tail, d);
        }
        else
        {
            Node* q = head;
            for(int i = 1; i < pos-1; i++)
            {
                q = q->next;
            }
            Node* temp = new Node(d);
            temp->next = q->next;
            q->next = temp;
        }
    }
}

void deleteHead(Node* &head)
{
    int x = head->data;
    head = head->next;
    cout<<"Deleted head "<<x<<endl;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<endl;
}

int main()
{
    //Created a head pointer, pointing to NULL
    Node* head = NULL;
    Node* tail = NULL;

    //Created first node and made head to point on first node;
    Node *node1 = new Node(10); 
    head = node1;
    tail = node1;

    //Insert at head
    insertAtHead(head, 12);
    
    //Insert at tail
    inserAtTail(tail, 9);
    
    inserAtTail(tail, 11);
    insertAtHead(head, 15);
    inserAtPosition(head,tail,5,2);
    inserAtPosition(head,tail,7,7);
    

    //Printing linked list
    print(head);

    return 0;
}
