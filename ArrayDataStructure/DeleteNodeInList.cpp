#include "iostream"
using namespace std;
class node
{
public:
  int data;
  node *next;
  node(int data = 0):data(data),next(NULL){}
};
void displayNodes(node *head)
{
  while (head!=NULL)
  {
    cout << "Data : " << head->data << endl;
    head = head->next;
  }
}
void InsertNode(node *&temp, int data)
{
  node* curr = temp;
  node *newNode = new node(data);
  if(temp==NULL)
  { 
    temp = newNode;
    return;
  }
  while (curr->next!=NULL)
  {
    curr = curr->next;
  }
  if (curr->next == NULL)
  {
    newNode->data = data;
    curr->next = newNode;
  }
};
void deleteNode(node* temp , int data)
{
  
}
int main()
{
  node *head =    NULL;
  InsertNode(head, 1);
  InsertNode(head, 3);
  InsertNode(head, 5);
  InsertNode(head, 7);
  InsertNode(head, 9);
  InsertNode(head, 11);
  displayNodes(head);
}
