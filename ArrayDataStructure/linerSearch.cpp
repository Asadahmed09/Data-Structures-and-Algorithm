#include"iostream"
using namespace std;
int linearSeacrh(int arr[],int target,int size)
{
  for(int i = 0  ; i < size ; i++)
  {
    if(target == arr[i]){
      return i;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {1,3,4,2,7,6,8,9,0};
  cout << "Checking size : " << (sizeof(arr)/4) << endl;
  int size = sizeof(arr);
  int target = -1;
  cout << "enter the target to search for in array : " << endl;
  cin >> target;
  cout << "Index is : " << linearSeacrh(arr,target,size) << endl;
}