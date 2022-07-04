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

Node *segregate(Node *head)
{
    Node *even_start = NULL, *even_end = NULL, *odd_start = NULL, *odd_end = NULL;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (even_start == NULL)
            {
                even_start = curr;
                even_end = even_start;
            }
            else
            {
                even_end->next = curr;
                even_end = even_end->next;
            }
        }
        else
        {
            if (odd_start == NULL)
            {
                odd_start = curr;
                odd_end = odd_start;
            }
            else
            {
                odd_end->next = curr;
                odd_end = odd_end->next;
            }
        }
    }
    if (odd_start == NULL || even_start == NULL)
    {
        return head;
    }
    even_end->next = odd_start;
    odd_end->next = NULL;
    return even_start;
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

    Node *head = new Node(17);
    head->next = new Node(15);
    head->next->next = new Node(8);
    head->next->next->next = new Node(12);
    head->next->next->next->next = new Node(10);
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->next = new Node(4);

    printlist(head);
    cout << endl;
    head = segregate(head);
    printlist(head);

    return 0;
}