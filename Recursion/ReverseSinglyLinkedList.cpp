#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node* next;
};
node* reverse(node* head)
{
  node* temp = head;
  node* curr = temp;
  node* prev = NULL;
  node* next = NULL;
  while(curr!=NULL)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
int main()
{
  
}