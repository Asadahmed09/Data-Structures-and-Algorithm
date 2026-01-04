#include "iostream"
#include <stack>
using namespace std;
class node
{
public:
  int data;
  node *next;
  node() { next = NULL; }
};
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
void displayNodes(node *head)
{
  while (head)
  {
    cout << "Data : " << head->data << endl;
    head = head->next;
  }
}
bool checkPalindrome(node *head)
{
  // cout << head->data;
  stack<int> temp;
  bool ans = true;
  node *x = head;
  while (x->next)
  {
    temp.push(x->data);
    // cout << temp.top() << endl;
    x = x->next;
  }
  temp.push(x->data);
  // cout << temp.top();
  x = head;

  while (x->next)
  {
    int lorusinghasad = temp.top();
    // cout << lorusinghasad << endl;
    temp.pop();
    if (lorusinghasad != x->data)
    {
      ans = false;
      return ans;
    }
    x = x->next;
  }

  return ans;
}
int main()
{
  node *head = new node();
  head->data = 2;
  nsertNode(head, 1);
  InsertNode(head, 3);
  InsertNode(head, 4);
  InsertNode(head, 2);
  displayNodes(head);
  
}