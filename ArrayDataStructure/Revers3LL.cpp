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
void Add(Node* &head , int data)
{
  Node* temp = head;
  Node *newNode = new Node();
  newNode->data = data;
  if(head==NULL) {
  head = newNode;
  return ;
  }
  while(temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}
Node* reverse(Node* &head)
{
  Node* temp = head;
  Node* prev = NULL;
  Node* curr = temp;
  Node* next = NULL;
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
  Node* head = NULL;
  Add(head,1);
  Add(head,2);
  Add(head,3);
  Add(head,4);
  Add(head,5);
  traverse(head);
  head = reverse(head);
  traverse(head);
}