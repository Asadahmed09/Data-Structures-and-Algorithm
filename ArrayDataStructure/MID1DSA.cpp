#include "iostream"
using namespace std;
string currentSong = "NULL";
class node
{
  public:
  string data;
  node* next;
  node* prev;
  node():next(NULL),prev(NULL){}
};
void DeleteSpecificSong(node* &head,string songName)
{
  node* temp = head;
  node* prev = NULL;
  while(temp->data != songName)
  {
    temp = temp->next;
  }
  if(temp->data == songName)
  {
    node* song = temp;
    node* next = temp->next;
    temp = temp->prev;
    temp->next = next;
    delete song;
    return;
  }
  else
  {
    cout << "didn't found that song " << endl;
  }
}
void addSong(node* &temp, string SongName)
{
  node* head = temp;
  node* NewNode = new node();
  NewNode->data = SongName;
  if(head==NULL){head = NewNode; return ;}
  while(head->next!=NULL)
  {
    head = head->next;
    
  }
  NewNode->prev = head;
  head->next = NewNode;
  
}
void traverse(node* head)
{
  while(head!=NULL)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
void deleteSong(node* &temp)
{
  node* head = temp;
  if(head->next == NULL)
  {
    head = NULL;
    delete head;
    return;
  }
  while(head->next!=NULL)
  {
    head = head->next;
  }
  node* last = head;
  head = head->prev;
  head->next = NULL;
  delete last;
}
node *currentSongAddress = NULL;
void MoveToNextSong(node* head)
{
  if(currentSong == "NULL")
  {
    currentSong = head->data;
    currentSongAddress = head;
    return;
  }
  if(currentSongAddress->next==NULL){cout << "NO next song exist " << endl; return;}
  currentSong = currentSongAddress->next->data;
  currentSongAddress = currentSongAddress->next;
  
}
void MoveToSpecificSong(node* head , string SongName)
{
  if(head->data == SongName)
  {
    cout << "You are now on : " << SongName << endl;
    return;
  }
  while(head->data != SongName && head->next!= NULL)
  {
    head = head->next;
  }
  if(head->data==SongName)
  {
    currentSong = SongName;
    currentSongAddress = head;
    cout << "You are now on : " << SongName << endl;
    return;
  }
  else
  {
    cout << "No such song found" << endl;
  }
}
void PrintSong()
{
  cout << "The current Song is : " << currentSong << endl;
}
int main()
{
  node* head = new node();
  head->data = "faiz";
  addSong(head,"supreme");
  addSong(head,"nothing lasts");
  traverse(head);
  DeleteSpecificSong(head,"supreme");
  traverse(head);
}