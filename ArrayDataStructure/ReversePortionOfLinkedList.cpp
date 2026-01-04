#include "iostream"
using namespace std;
class node
{
public:
  int data;
  node *next;
};
void addData(node *&head, int data)
{

  node *newNode = new node();
  newNode->data = data;
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}
void showData(node *&head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << "Data : " << temp->data << endl;
    temp = temp->next;
  }
}
node *reversePartOfLinkedList(node *&head, int s, int e)
{
  node dummy;
  dummy.next = head;
  node *start = head;
  node *prevOfStart = &dummy;
  node *end = head;
  node *NextOfEnd = NULL;
  for (int i = 1; i < s; i++)
  {
    prevOfStart = start;
    start = start->next;
  }
  for (int i = 1; i < e; i++)
  {
    end = end->next;
  }

  NextOfEnd = end->next;
  node *prev = NULL;
  node *curr = start;
  node *next = NULL;
  while (curr != NextOfEnd)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  prevOfStart->next = end;
  start->next = NextOfEnd;
  return dummy.next;
}
int main()
{
  node *head = NULL;
  // addData(head, 1);
  // addData(head, 2);
  // addData(head, 3);
  // addData(head, 4);
  addData(head, 5);
  showData(head);
  cout << "After reversal " << endl;
  head = reversePartOfLinkedList(head, 1, 1);
  showData(head);
}