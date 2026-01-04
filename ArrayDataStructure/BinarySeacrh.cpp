#include "iostream"
using namespace std;
int main()
{
  int arr[] = { 2,5, 8, 12, 16, 23, 38, 45, 56, 72 };
  int low  = 0 , high = (sizeof(arr)/4)-1;
  int med = 0;
  int found = 1;
  int target = 56;
  while(found!=0)
  {
    med = (high+low)/2;
    if(arr[med]==target)
    {
      cout << "Target found at index : " << med << endl; 
      found = 0;
    }
    else if(arr[med] < target)
    {
      low = med +1;
    }
    else
    {
      high = med - 1;
    }
  }

}