#include "iostream"
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
};
void traverse(Node* head)
{
  while (head->next != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
int main()
{
  Node* head = new Node();
  traverse(head);
}