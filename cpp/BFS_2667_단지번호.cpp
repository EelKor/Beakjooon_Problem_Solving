#include <iostream>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
} Node;

struct LinkedQueue
{
    Node *front, *rear;
    int len = 0;

    LinkedQueue()
    {
        *front = NULL;
        *rear = NULL;
    }
    bool isempty()
    {
        return len == 0;
    }
    int push(int num)
    {
        if(isempty())
        {
            Node *node = (Node*)malloc(sizeof(Node));
            node->data = num;
            front = node;
        }
        else
        {
            Node *node = (Node*)malloc(sizeof(Node));
            node->data = num;
            rear->next = node;
            rear = node;
        }
        len++;
    }

    int pop()
    {
        if(isempty) return -1;

        Node *pop = front;
        int data = pop->data
        front = pop->next;
        free(pop);
        len--;
        return data;

    }
};


int main()
{
    char **map;
    bool **seen;
    int n;
    
    cin >> n;

    // 동적 할당 부분 
    map = (char**)malloc(sizeof(char*) * n);
    seen = (bool**)malloc(sizeof(bool*) * n);
    for (int i = 0; i < n; i++)
    {
        *(map+i) = (char*)malloc(sizeof(char) * n);
        *(seen+i) = (bool*)malloc(sizeof(bool) * n);
    }

    // 데이터 입력 부분 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }


    // 메모리 해제
    for (int i = 0; i < n; i++)
    {
        free(map[i]);
        free(seen[i]);
    }
    free(map);
    free(seen);
    
    return 0;
}