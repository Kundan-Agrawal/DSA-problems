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
// below methos uses a dummy node and whole lo=inked list is destroyed
//  bool isLoop(Node *head)
//  {
//      Node *curr = head;
//      Node *temp = new Node(0);
//      while (curr != NULL)
//      {
//          if (curr->next == NULL)
//          {
//              return false;
//          }
//          if (curr->next == temp)
//          {
//              return true;
//          }
//          Node *curr_next = curr->next;
//          curr->next = temp;
//          curr = curr_next;
//      }
//      return false;
//  }
// below method uses hashing
bool isLoop(Node *head)
{
    unordered_set<Node *> s;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        if (s.find(curr) != s.end())
        {
            return true;
        }
        s.insert(curr);
    }
    return false;
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

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head->next;
    // printlist(head);
    cout << endl
         << isLoop(head);
    return 0;
}