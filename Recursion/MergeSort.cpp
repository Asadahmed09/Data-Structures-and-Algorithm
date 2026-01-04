#include<iostream>
using namespace std;
void merge(int array[] , int leftIndex , int MiddleIndex , int rightIndex)
{
  int leftSize = MiddleIndex - leftIndex +1;
  int rightSize = rightIndex - MiddleIndex;

  int leftArr[leftSize];
  int rightArr[rightSize];

  for(int i = 0 ; i < leftSize ; i++)
    leftArr[i] = array[leftIndex + i];

  for(int i = 0 ; i < rightSize ; i++)
    rightArr[i] = array[MiddleIndex + 1 + i];

  int i = 0  , j = 0 , k = leftIndex;
  while(i < leftSize && j < rightSize)
  {
    if(leftArr[i] <= rightArr[j])
    {
      array[k] = leftArr[i];
      i++;
    }
    else{
      array[k] = rightArr[j];
      j++;
    }
    k++;
  }
  while(i < leftSize)
  {
    array[k] = leftArr[i];
    i++;
    k++;
  }
  while(j < rightSize)
  {
    array[k] = rightArr[j];
    j++;
    k++;
  }


}
void mergeSort(int arr[] , int left , int right)
{
  int middle  = (left+right)/2;
  if(left < right)
  {
    mergeSort( arr , left , middle);  
    mergeSort( arr , middle+1 , right);  
    merge(arr, left , middle , right);  
  }
}
int main()
{
  int array[] = {6, 17, 8, 10, 9};
  int totalElements = 5;

  mergeSort(array, 0, totalElements - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < totalElements; i++)
    cout << array[i] << " ";
}