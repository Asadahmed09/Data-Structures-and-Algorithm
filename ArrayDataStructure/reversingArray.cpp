#include "iostream"
using namespace std;
void reversArr(int arr[], int size)
{
  int holder = -1;
  for (int i = 0, j = size - 1; i < (size / 2); i++, j--)
  {
    //we can also say that it is two pointer approach / or Maybe the almost same approach used in binary search
    // what are we doing here is initializing two pointers : start pointer i.e -> i and end pointer i.e -> j = start-end
    holder = arr[i];
    arr[i] = arr[j];
    arr[j] = holder;
    cout << "checking values for each jth iteration : " << arr[i] << " And arr[j]" << arr[j] << endl;
  }
}
void reverseArrusingWhile(int arr[],int size){
  // eg -> 1-5 -> 0 - 4 -> 0<4 T -> 1 < 3 T -> 2 < 2 F -> and if we use for -> size/2 and size is 5/2 = 2 so Two valid iterations 
  int start = 0 , end = size-1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++ , end--;
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14};
  reversArr(arr, (sizeof(arr) / 4));
  cout << "Printing after reversing array ." << endl;
  for (int i = 0; i < sizeof(arr) / 4; i++)
  {
    cout << "arr[" << i << "] : " << arr[i] << endl;
  }
  cout << "Printing after using While Loop revere version ." << endl;
  reverseArrusingWhile(arr,(sizeof(arr)/4));
  for (int i = 0; i < sizeof(arr) / 4; i++)
  {
    cout << "arr[" << i << "] : " << arr[i] << endl;
  }
}