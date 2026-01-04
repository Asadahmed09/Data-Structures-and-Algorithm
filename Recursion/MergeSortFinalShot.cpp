#include<iostream>
using namespace std;

void MergeArrays(int arr[] , int start , int middle , int end)
{
  int NewArr[end-start];
  int i = start;
  int j = middle;
  int k = 0;
  while(i < middle && j < end)
  {
    if(arr[i] < arr[j])
    {
      NewArr[k] = arr[i++];
    }
    else
    {
      NewArr[k] = arr[j++];
    }
    k++;
  }

  while(i != middle)
  {
    NewArr[k++] = arr[i++];
  }
  while(j != end)
  {
    NewArr[k++] = arr[i++];
  }
  
  //now assigning or updating the existing values in the original array upto this call
  for(i = 0 ; i < (end-start) ; i++)
  {
    arr[start + i] = NewArr[i];
  }
}

void MergeSort(int arr[] , int start , int end)
{
  if(end - start == 1)
    return;
  
    int middle = (start+end)/2;
    MergeSort(arr,start , middle);
    MergeSort(arr,middle , end);
    MergeArrays(arr,start,middle,end);
  
}

int main()
{
  int arr[] = {6, 4, 3, 2, 1};
  MergeSort(arr, 0, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}