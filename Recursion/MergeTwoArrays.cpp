#include<iostream>
using namespace std;
void mergeTwoArray(int arr1[] , int arr2[] , int finalArr[])
{
  int s1 = 4;
  int s2 = 3;
  int i = 0 , j = 0 , k = 0;
  while(i != s1 && j != s2)
  {
    if(arr1[i] < arr2[j])
    {
      finalArr[k] = arr1[i];
      i++;
    }
    else
    {
      finalArr[k] = arr2[j];
      j++;
    }
    k++;
  }
  while(i!=s1)
  {
    finalArr[k++] = arr1[i++];
  }
  while(j!=s2)
  {
    finalArr[k++] = arr2[j++];
  }

}
int main()
{
  int arr1[4] = {1,3,5,7};
  int arr2[3] = {2,4,9};
  //final array size is 7
  int finalArr[7];
  mergeTwoArray(arr1,arr2,finalArr); 
  cout << "Final Array : ";
  for(int i = 0 ; i < 7 ; i++)
  {
    cout << finalArr[i] << " ";
  }
}