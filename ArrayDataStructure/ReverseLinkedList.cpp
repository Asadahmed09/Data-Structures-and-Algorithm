#include "iostream"
using namespace std;
class Node
{
public:
  int data;
  Node *next;
};
void traverse(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
// Node* reverse(Node* head)
// {
//   if(head->next == NULL)
//   {
//     cout << "base condition met" << endl;
//     return head;
//   }
//   Node* newNode= new Node();
//   reverse(head->next);
//   cout << "On Back Track" << endl;
//   newNode = head;
// }
Node* reverseLL(Node* head)
{
  if(head->next==NULL)
  return head;

  Node* prev = NULL;
  Node* curr = head;
  Node* next = NULL;
  while(curr !=NULL)
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
  Node *head = new Node();
  head->data = 1;
  Node *second = new Node();
  second->data = 2;
  Node *Third = new Node();
  Third->data = 3;
  head->next = second;
  second->next = Third;
  Third->next = NULL;
  traverse(head);
  head = reverseLL(head);
  traverse(head);
}