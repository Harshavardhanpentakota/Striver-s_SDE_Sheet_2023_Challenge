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

bool check(LinkedListNode<int>*temp1,LinkedListNode<int>*temp2)
{
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
          return 0;
        temp1=temp1->next;;
        temp2=temp2->next;
    }
    return 1;
}
bool isPalindrome(LinkedListNode<int> *head) {
    if(!head || !head->next)
      return 1;
    int n=0;
    LinkedListNode<int>*slow=head,*fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next;
        n++;
    } 
    LinkedListNode<int>*prev=NULL,*curr=head,*nextt;
    while(curr!=slow)
    {
        
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    if(n%2==0)
      return check(prev,curr);
    else 
      return check(prev,curr->next);
}