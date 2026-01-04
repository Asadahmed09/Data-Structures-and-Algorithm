#include "iostream"
using namespace std;
void sort(int arr[][10], int n)
{
  int* newArr = new int[n*n];
  for(int i = 0, k = 0 ; i < n ; i++)
  {
    for(int j = 0 ; j < n ; j++ , k++)
    {
      newArr[k] = arr[i][j];
    }
  }
  for(int i = 0 ; i < n*n ; i++)
  {
    cout << newArr[i] << " - ";
  }
  for(int i = 1 ; i < n ; i++)
  {
    int key = newArr[i];
    int j = i-1;
    while(j>=0 && newArr[j]>key)
    {
      newArr[j+1] = newArr[j];
      j = j-1;
    }
    newArr[j+1] = key;
  }
  for (int i = 0; i < n * n; i++)
  {
    cout << newArr[i] << " - ";
  }
}
int main()
{
  int n;
  cout << "Enter n for rows and coloms : " << endl;
  cin >> n;
  int matrix[n][10];
  for(int i = 0 ; i < n ; i++)
  {
    for(int j = 0 ; j < n ; j++)
    {
      cin >> matrix[i][j];
    }
  }
  sort(matrix,n);
}