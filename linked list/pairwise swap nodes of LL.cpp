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
// below method works in linet time but it is not good practice because it can be objects
// void pairwiseSwap(Node *head)
// {
//     Node *curr = head;
//     while (curr != NULL && curr->next != NULL)
//     {
//         swap(curr->data, curr->next->data);
//         curr = curr->next->next;
//     }
// }

// method-2 chaning pointer/references
Node *pairwiseSwap(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        prev = curr;
        Node *nxt = curr->next->next;
        curr->next->next = curr;
        curr = nxt;
    }
    prev->next = curr;
    return head;
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
    head = pairwiseSwap(head);
    printlist(head);

    return 0;
}