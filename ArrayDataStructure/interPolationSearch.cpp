#include "iostream"
using namespace std;
int InterPolationSearch(int arr[], int n,int target)
{
  int low = 0 , high = n - 1; int pos = 0;
  while(target>=arr[low] && low <= high && target<=arr[high])
  {
    pos = low + ((target-arr[low])*(high-low))/(arr[high]-arr[low]);
    if(arr[pos]==target) return pos;
    else if(arr[pos]>target)
    {
      high = pos-1;
    }
    else
    {
      low = pos+1;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {1,2,3,4,5,6,7};
  cout << "finding : " << InterPolationSearch(arr,7,6);
}