#include "iostream"
using namespace std;

void MergeArrAnB(int arrA[], int arrB[], int arrC[], int m, int n)
{
  int i = 0, j = n - 1, k = 0;

  while (i < m && j >= 0)
  {
    if (arrA[i] < arrB[j])
      arrC[k++] = arrA[i++];
    else
      arrC[k++] = arrB[j--];
  }

  while (i < m)
    arrC[k++] = arrA[i++];
  while (j >= 0)
    arrC[k++] = arrB[j--];
}

int main()
{
  int arrA[5], arrB[5], arrC[10];

  cout << "Enter 5 elements for A (ascending): ";
  for (int i = 0; i < 5; i++)
    cin >> arrA[i];

  cout << "Enter 5 elements for B (descending): ";
  for (int i = 0; i < 5; i++)
    cin >> arrB[i];

  MergeArrAnB(arrA, arrB, arrC, 5, 5);

  cout << "Merged C (ascending): ";
  for (int i = 0; i < 10; i++)
    cout << arrC[i] << " ";
}
