#include <iostream>
using namespace std;
class node
{
public:
  int val;
  node *next;
  node(int val) : val(val), next(NULL) {}
};
class stack
{
public:
  node *top;
  stack() : top(NULL) {}
  void Push(int val)
  {
    node *newNode = new node(val);
    newNode->next = top;
    top = newNode;
    cout << "PUSHED : " << val << endl;
  }
  void Pop()
  {
    if (top == NULL)
    {
      cout << "EMPTY - STACK - NO VALUE TO POP" << endl;
      return;
    }
    node *temp = top;
    top = top->next;
    cout << "POPPED : " << temp->val << endl;
    delete temp;
  }
  void Display()
  {
    node *temp = top;
    while (temp)
    {
      cout << "DATA : " << temp->val << endl;
      temp = temp->next;
    }
  }
};
int main()
{
  stack s;
  s.Pop();
  s.Push(1);
  s.Push(2);
  s.Push(3);
  s.Push(4);
  s.Push(5);
  s.Display();
  s.Pop();
  s.Pop();
  s.Pop();
  s.Display();
}