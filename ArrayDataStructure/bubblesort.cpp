#include "iostream"
using namespace std;
void bubbleSort(int arr[], int n)
{
  for(int i = 0 ; i < n-1 ; i++)
  {
    for(int j = i+1 ; j < n ; j++)
    {
      if(arr[j]<arr[i])
      {
        swap(arr[j],arr[i]);
      }
    }
  }
}
void combSort(int arr[],int n)
{
  int gap = 0;
  bool swapped = false;
  while(gap!=1 && swapped)
  {
    gap = (gap*13)/10;
    if(gap<1) gap = 1;

    swapped = false;
    for(int i = 0 ; i + gap < n ; i++)
    {
      if(arr[i]>arr[i+gap])
      {
        swap(arr[i],arr[i+gap]);
        swapped = true;
      }
    }
  }
}
int main()
{
  int arr[] = {6,5,43,2,3,4,2,1};
  int n = 8;
  bubbleSort(arr, n);
  for(int i = 0 ; i < n ; i++)
  {
    cout << arr[i] << " ";
  }
  cout << sizeof(arr)/sizeof(arr[0]);
}




