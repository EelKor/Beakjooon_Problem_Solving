#include <iostream>
#include <string.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct linkedQueue
{
    Node *front, *rear;
    int len = 0;

    linkedQueue()
    {
        front = rear = NULL;
    }
    int size()
    {
         return len;
    }
    bool isempty() 
    {
        return len == 0;
    }
    void enqueue(int data)
    {
        Node *node = (Node*)malloc(sizeof(Node));
        node->data = data;
        node->next = NULL;
        if(isempty())
        {
            front = rear = node;
        }
        else
        {
            rear->next = node;
            rear = rear->next;
        }
        len++;
    }
    int dequeue()
    {
        if(isempty())
        {
            return -1;
        }
        else
        {
            Node *delNode = front;
            int ret = delNode->data;
            front = delNode->next;
            free(delNode);
            len--;
            return ret;
        }
        
    }
};


int main()
{   
    int n;
    string cmd;
    int num;
    linkedQueue q;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            cin >> num;
            q.enqueue(num);
        }
    
        else if(cmd == "pop")
        {
            cout << q.dequeue() << endl;
        }
        else if(cmd == "size")
        {
            cout << q.len << endl;
        }
        else if(cmd == "empty")
        {
            cout << q.isempty() << endl;
        }
        else if(cmd == "front")
        {
            if(!q.isempty()) cout << q.front->data << endl;
            else cout << "-1" << endl;
        }
        else if(cmd == "back")
        {   
            if(!q.isempty()) cout << q.rear->data << endl;
            else cout << "-1" << endl;
        }
        else
        {
            
        }
    }
    return 0;
}