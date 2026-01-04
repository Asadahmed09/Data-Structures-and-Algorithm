#include "iostream"
using namespace std;
class node
{
  public:
  int data;
  node* next;
};
void InsertData(node* &head, int data)
{
  node* newNode = new node();
  newNode->data = data;
  if(head==NULL)
  {
    head = newNode;
    return ;
  }
  node* temp = head;
  while(temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  return;
}

node *findMiddle(node *start, node *end)
{
  node *fast = start;
  node *slow = start;
  while (fast != end && fast->next != end)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}
void traverse(node* head)
{
  while(head!=NULL)
  {
    cout << head->data << " - " ;
    head = head->next;
  }
}
bool BinarySearch(node* head , int target)
{
  node* start = head;
  node* end = NULL;
  while(start!=end)
  {
    node* middle = findMiddle(start,end);
    if(middle->data == target)
    {
      return 1;
    }
    else if(middle->data>target)
    {
      end = middle;
    }
    else 
    {
      start = middle;
    }
  }

  return 0;
}
int main()
{
  node* head = NULL;
  InsertData(head,1);
  InsertData(head,2);
  InsertData(head,3);
  InsertData(head,4);
  traverse(head);
  cout << "Returning slow ptr " << findMiddle(head,head->next->next->next) << endl;
  cout << "finding element 3 : " << BinarySearch(head,3)?cout<<"found":cout<<"not found" << endl;
}