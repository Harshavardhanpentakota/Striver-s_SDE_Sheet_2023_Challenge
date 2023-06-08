#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* removeKthNode(Node* head, int k)
{
   Node *start=new Node();
   Node *slow=start,*fast=start;
   start->next=head;
   for(int i=0;i<k;i++)
     fast=fast->next;
   while(fast->next)
   {
       slow=slow->next;
       fast=fast->next;
   }
   slow->next=slow->next->next;
   return start->next;
}
