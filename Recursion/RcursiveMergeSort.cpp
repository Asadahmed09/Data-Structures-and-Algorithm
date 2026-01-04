#include <iostream>
using namespace std;

void Merge(int arr[], int start, int mid, int end)
{
  int mixArr[end - start];
  int i = start, j = mid, k = 0;
  while (i < mid && j < end)
  {
    if (arr[i] < arr[j])
    {
      mixArr[k] = arr[i++];
    }
    else
    {
      mixArr[k] = arr[j++];
    }
    k++;
  }
  while (i < mid)
  {
    mixArr[k++] = arr[i++];
  }
  while (j < mid)
  {
    mixArr[k++] = arr[j++];
  }
  int size = sizeof(mixArr) / sizeof(mixArr[0]);
  for (int f = 0; f < size; f++)
  {
    arr[start + f] = mixArr[f];
  }
}

void mergeSort(int arr[], int start , int end)
{
  int middle = (start+end)/2;
  if(end - start == 1)
    return;
  mergeSort(arr,start,middle);
  mergeSort(arr, middle , end);
  Merge(arr,start,middle,end);
}

int main()
{
  int arr[] = {6,4,3,2,1};
  mergeSort(arr,0,5);
  for(int i = 0 ; i < 5 ;i++)
  {
    cout << arr[i] << " ";
  }
}