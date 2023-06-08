#include <bits/stdc++.h>
using namespace std;

template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head || !head->next)
      return head;
    LinkedListNode<int>*prev=NULL,*curr=head,*nextt;
    while(curr)
    {
       nextt=curr->next;
       curr->next=prev;
       prev=curr;
       curr=nextt;
    }
    return prev;
}