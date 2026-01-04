#include "iostream"
using namespace std;
int binSearch(int arr[],int target,int start, int end)
{
  int middle = start + (end-start)/2;
  if(start > end)
  {
    return -1;
  }
  else if(target == arr[middle])
  {
    return middle;
  }
  else if(target < arr[middle])
  {
    return binSearch(arr,target,start,middle-1);
  }
  return binSearch(arr,target,middle+1,end);
}

int BinarySearchRotated(int arr[],int target , int start , int end)
{
  int middle = start + (end-start)/2;
  if(start>end)return -1;
  if(arr[middle]==target)
  {
    return middle;
  }
  else if(arr[start] <= arr[middle])
  {
    if(target >= arr[start] && target <= arr[middle])
    {
      return BinarySearchRotated(arr,target , start , middle-1);
    }
    else
    {
      return BinarySearchRotated(arr,target,middle+1,end);
    }
  }
  else if(target > arr[middle] && target <= arr[end])
  {
    return BinarySearchRotated(arr,target,middle+1,end);
  }
  else 
  {
    return BinarySearchRotated(arr,target,start,middle-1);
  }
}

int main()
{
  int arr[] = {6,1,2,3,4};
  // cout << "Index is : " << binSearch(arr,3,0,(sizeof(arr)/sizeof(arr[0])));
  cout << "Index is : " << BinarySearchRotated(arr,1,0,(sizeof(arr)/sizeof(arr[0]))-1);
}
