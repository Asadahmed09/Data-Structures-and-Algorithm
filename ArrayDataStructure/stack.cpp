#include "iostream"
using namespace std;
class stack
{
  public:
  int* arr = nullptr;
  int count = 0;
  void add(int data)
  {
    int* newArr = new int[count+1];
    for(int i = 0  ; i  < count ; i++) newArr[i] = arr[i];
    newArr[count] = data;
    delete[] arr;
    arr = newArr;
    count++;
  }
  void remove()
  {
    int *newArr = new int[count-1];
    for (int i = 0; i < count-1; i++)
      newArr[i] = arr[i];
    delete[] arr;
    arr = newArr;
    count--;
  }
  void reverse()
  {
    int* newArr = new int[count+1];
    for(int i = count-1 , j = 0 ; i >= 0 ; i--,j++ )
    {
      newArr[j] = arr[i];
    }
    delete[] arr;
    arr = newArr;
  }
  void print()
  {
    for(int i = 0 ; i < count ; i++)
    {
      cout << "data : " << arr[i] << endl;
    }
  }
};
int main()
{
  stack s;
  s.add(5);
  s.add(10);
  s.add(15);
  cout << "Original:\n";
  s.print();
  cout << "\nAfter reverse:\n";
  s.reverse();
  s.print();

  cout << "\nAfter remove:\n";
  s.remove();
  s.print();
}