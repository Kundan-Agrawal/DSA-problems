#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
int search(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
            ;
        }
    }
    return -1;
}
int searchRecursive(Node *head, int x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
    {
        return 1;
    }
    else
    {
        int res = searchRecursive(head->next, x);
        if (res == -1)
            return -1;
        else
            return (res + 1);
    }
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head = insertBegin(head, 50);
    head = insertBegin(head, 40);
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    printlist(head);
    cout << endl
         << searchRecursive(head, 40);
    return 0;
}
