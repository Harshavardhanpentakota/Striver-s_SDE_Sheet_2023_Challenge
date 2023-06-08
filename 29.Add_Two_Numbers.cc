#include<bits/stdc++.h>
using namespace std;
  class Node {
  public:
       int data;
       Node *next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
       Node (int data, Node *next) {
           this->data = data;
           this->next = next;
       }
  };

Node *addTwoNumbers(Node *l1, Node *l2)
{
   int carry=0;
   Node* result=new Node();
   Node* temp=result;
   while(l1 || l2 || carry)
   {
       int res=0;
       if(l1!=NULL)
       {
          res+=l1->data;
          l1=l1->next;
       }
       if(l2!=NULL)
       {
           res+=l2->data;
           l2=l2->next;
       }
       res+=carry;
       carry=res/10;
       res=res%10;
       Node* n=new Node(res);
       temp->next=n;
       temp=temp->next;
   }
   return result->next;
}
