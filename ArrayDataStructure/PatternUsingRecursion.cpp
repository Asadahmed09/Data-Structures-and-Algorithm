#include "iostream"
using namespace std;
void pattern(int n)
{
  if(n==0)
  {
    return ;
  }
  for(int i = 0  ; i < n ; i++)
  {
    cout << "* ";
  }
  cout << endl;
  pattern(n-1);
}
void patternAdvance(int r , int c)
{
  if(r==0)
  {
    return;
  }
  if(r>c)
  {
    patternAdvance(r,++c);
    cout << "*";
  }
  else{
    patternAdvance(--r, 0);
    cout << endl;
  }
  
}
void bubbleSort(int arr[],int n)
{
  for(int i = 0 ; i < n-1 ; i++)
  {
    cout << "Iteration count : " << i << endl;
    for(int j = 0 ; j < n-i-1 ; j++)
    {
      if(arr[j]<arr[j+1])
      {
      swap(arr[j],arr[j+1]);
      for (int i = 0; i < n; i++)
      {
        cout << arr[i] << " ";
      }
      cout << endl;
      }
    }
  }
}
void recSortBubble(int arr[],int r, int c)
{
  if(r==0)
  {
    return;
  }
  if(r>c)
  {
    if(arr[c]<arr[c+1])
    {
      swap(arr[c],arr[c+1]);
    }
    recSortBubble(arr,r,c+1);
  }
  else
  {
    recSortBubble(arr,r-1,0);
  }
}
// void selectionSort(int arr[],int max,int r,int c)
// {
//   if(r==0)return;

//   if(r>c)
//   {
//     if(max < arr[c])
//     {
//       max = arr[c];
//       selectionSort(arr,max,r,++c);
//     }
//     swap(arr[r],)
//   }
// }
int main()
{
  // pattern(5);
  // patternAdvance(2,0);
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  // bubbleSort(arr,n);
  recSortBubble(arr,n-1,0);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}