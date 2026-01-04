#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node* next;
  node(int data):next(NULL),data(data){}
};
node *ReverseList( node *prev, node *curr)
{
  if (curr == NULL)
    return prev;
    node* next = curr->next;
    curr->next = prev;
    return ReverseList(curr,next);
}
void InsertNode(node *head, int data)
{
  node *newNode = new node(data);
  while (head->next != NULL)
  {
    head = head->next;
  }
  head->next = newNode;
}
void PrintList(node* head)
{
  while(head!=NULL)
  {
    cout << "Data : " << head->data << endl;
    head = head->next;
  }
}
int main()
{
  node *head = new node(1);
  InsertNode(head, 2);
  InsertNode(head, 3);
  InsertNode(head, 3);
  InsertNode(head, 2);
  InsertNode(head, 1);
  PrintList(head);
  cout << "After reversing : " << endl;
  head = ReverseList(NULL,head);
  PrintList(head);
}