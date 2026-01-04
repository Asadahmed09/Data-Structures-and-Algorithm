#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node* next;
  node(const int data):data(data){next = NULL;}
};
node *ReverseList(node *next, node *prev, node *curr)
{
  if (curr == NULL)
    return prev;
  curr->next = prev;
  return ReverseList(curr->next, curr, next);
}
void Palindrome(node* head)
{
  cout << "IN palindrome function call " << endl;
  node *temp = head;
  node *fast = head;
  node *slow = head;
  while (fast != NULL && fast->next != NULL)
  {
    fast = fast->next->next;
    slow = slow->next;
  }
  cout << "Reached below 2 pointers" << endl;
  node *next = NULL;
  node *prev = NULL;
  node* curr = slow;
  prev = ReverseList(next,prev,curr);
  while(prev!= NULL)
  {
    cout << "Prev data : " << prev->data << "- head pointer data : " << head->data << endl;
    prev = prev->next;
    head = head->next;
  }
}
void InsertNode(node* head, int data)
{
  node* newNode = new node(data);
  while(head->next!=NULL)
  { 
    head = head->next;
  }
  head->next = newNode;
}

int main()
{
  node* head = new node(1);
  InsertNode(head,2);
  InsertNode(head,3);
  InsertNode(head,3);
  InsertNode(head,2);
  InsertNode(head,1);
  Palindrome(head);
}