#include<iostream>
using namespace std;
void Sort(int arr[] ,int r,int c)
{
  if(r == 0 )
    return;

  if(  c < r )
    {
      if(arr[c] > arr[c + 1])
      {
        swap(arr[c],arr[c+1]);
      }
      Sort(arr, r , c + 1);
    }
    else
    {
      Sort(arr, r - 1, 0);
    }
}

void Pattern(int r , int c)
{
  if(r==0)
    return;
  if(r==c)
  {
    cout << endl;
    Pattern(--r,0);
  }
  if(c<r)
  {
    cout << "* ";
    Pattern(r, ++c);
  }
  
  
}
void PatternReverse(int r , int c)
{
  if(r==5)
    return;
  if(r==c)
  {
    PatternReverse(++r,0);
    cout << endl;
    return;
  }
  if(c<r) 
  {
    PatternReverse(r, ++c);
    cout << "* ";
  }
  
  
}

void SelectionSort(int arr[] , int max , int r , int c)
{
  if(r == 0)
    return;
  if( c < r)
  {
    if(arr[max] < arr[c])
      max = c;
    SelectionSort(arr,max,r,++c);
  }
  else
  {
    swap(arr[max],arr[r-1]);
    SelectionSort(arr,0,--r,0);
  }
}

int main()
{
  int arr[] = {5,4,3,2,1};
  
  SelectionSort(arr,0,5,0);
  for(int i = 0 ; i < 5 ; i++)
  {
    cout << arr[i] << " ";
  }
  // PatternReverse(1,0);
}