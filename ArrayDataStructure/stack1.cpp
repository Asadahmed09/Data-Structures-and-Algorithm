#include "iostream"
using namespace std;
class stack
{
  int* arr;
  int count;
  public:
  stack():arr(nullptr),count(0){}
  ~stack(){delete[] arr;}
  void add(int data)
  {
    int* newArr = new int[count+1];
    for(int i = 0 ; i < count ; i++) newArr[i] = arr[i];
    newArr[count] = data;
    delete[] arr;
    arr = newArr;
    count++;
  }
  void remove()
  {
    int* newArr = new int[count-1];
    for(int i = 0 ; i < count-1 ; i++) newArr[i] = arr[i];
    arr[count-1] = 0;
    delete[] arr;
    arr = newArr;
    count--;
  }
  void reverse()
  {
    int* newArr = new int[count];
    for(int i = count-1 , j = 0 ; i >= 0 ; i--, j++)
    {
      newArr[j] = arr[i];
    }
    delete[] arr;
    arr = newArr;
  }
  void displayStack()
  {
    for(int i = 0 ; i < count ; i++)
    {
      cout << "| -" << arr[i] << "- |" << endl;
    }
  }

};
int main()
{
  stack s;
  cout << "Adding stack elements : " << endl;
  
  s.add(1);
  s.add(2);
  s.add(3);
  s.add(4);
  s.displayStack();
  cout << "Removing last two elements " << endl;
  s.remove();
  s.remove();
  cout << "Printing stack " << endl;
  s.displayStack();
}