#include<iostream>
using namespace std;
void MergeArr(int arr1[] , int arr2[],int n1, int n2)
{
  int size = n1 + n2;
  int* NewArr = new int[size];
  int i = 0;
  int j = 0;
  int k = 0;
  while(i<4 || j < 4)
  {
    // if(i == 4 )
    //   NewArr[j++] = arr2[j++];
    // if(j == 4)
    //   NewArr[j++] = arr1[i++];
    if(arr1[i]<arr2[j])
    {
      NewArr[k++] = arr1[i++];
    }
    else
    {
      NewArr[k++] = arr2[j++];
    }
    
  }
  for (int i = 0; i < size; i++)
  {
    cout << NewArr[i] << endl;
  }
}
int main()
{
  int arr1[4] = {2,3,5,8}; 
  int arr2[4] = {4,6,9,11}; 
  MergeArr(arr1,arr2,4,4);
}