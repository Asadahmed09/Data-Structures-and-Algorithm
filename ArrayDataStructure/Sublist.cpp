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
  node* low = new node();
  node* high = new  node();
  node *lower = low;
  node *higher = high;
  while (temp != NULL)
  {
    if (temp->data <= x)
    {
      lower->next = temp;
      lower = lower->next;
    }
    else if (temp->data > x)
    {
      higher->next = temp;
      higher = higher->next;
    }
    temp = temp->next;
  }
  higher->next = NULL;
  lower->next = NULL;
  displayNodes(low->next);
  displayNodes(high->next);
}
void InsertNode(node *temp, int data)
{
  while (temp->next)
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
