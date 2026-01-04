#include "iostream"
using namespace std;
class node
{
public:
  int data;
  node *next;
};
void displayNodes(node *head)
{
  while (head)
  {
    cout << "Data : " << head->data << endl;
    head = head->next;
  }
}
void LinkedListSublist(node *&head, int x)
{
  node *temp = head;
  node* lower = new node();
  node* higher = new node();
  node* ptr1 = lower;
  node* ptr2 = higher;
  while (temp != NULL)
  {
    if (temp->data <= x)
    {
      node* low = new node();
      low->data = temp->data;
      ptr1->next = low;
      ptr1 = ptr1->next;
    }
    else if (temp->data > x)
    {
      node* high = new node();
      high->data = temp->data;
      ptr2->next = high;
      ptr2 = ptr2->next;
    }
    temp = temp->next;
  }
  ptr1->next = NULL;
  ptr2->next = NULL;
  cout << "less than x node : " << endl;
  displayNodes(lower->next);
  cout << "More than x node : " << endl;
  displayNodes(higher->next);
}
void InsertNode(node *temp, int data)
{
  while (temp->next!=NULL)
  {
    temp = temp->next;
  }
  if (temp->next == NULL)
  {
    node *newNode = new node();
    newNode->data = data;
    temp->next = newNode;
  }
};

int main()
{
  node *head = new node();
  InsertNode(head, 1);
  InsertNode(head, 3);
  InsertNode(head, 5);
  InsertNode(head, 7);
  InsertNode(head, 9);
  InsertNode(head, 11);
  displayNodes(head);
  LinkedListSublist(head, 5);
}
