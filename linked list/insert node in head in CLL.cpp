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
Node *insertBegin1(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}
// O(n)
// another way is we can maintain tail pointer aslo with head pointer pointer
// 3rd approch->
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int rem = head->data;
        head->data = temp->data;
        temp->data = rem;
    }
    return head;
}
void printlist(Node *head)
{
    if (head == NULL)
        return;
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}
int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printlist(head);
    cout << endl;
    head = insertBegin(head, 5);
    printlist(head);
    return 0;
}