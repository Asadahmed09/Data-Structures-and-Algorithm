#include "iostream"
using namespace std;
int sum(int x)
{
  if(x<0) x = -x;
  if(x==0) return 0;
  return (x%10) + sum(x/10);
}
int sumOfArray(int x[],int i)
{
  if(i<0) return 0;
  return x[i] + sumOfArray(x,i-1);
}
int product(int x)
{
  if(x<0) x = -x;
  if(x>=0) return 1;
  return (x%10) * product(x/10);
}
int SumOfFirstN(int x)
{
  if(x<0) x = -x;
  if(x==0) return 0;
  return x + SumOfFirstN(x-1);
}
int FindFactorial(int x)
{
  if(x==1) return 1;
  return x * FindFactorial(x-1);
}
int power(int a , int b)
{
  if(b==0) return 1;
  return a * power(a,b-1);
}
int findMax(int arr[], int max , int n)
{
  if(n==0) return max;
  if(max<arr[n-1]) max = arr[n-1];
  return findMax(arr,max,n-1);
}
int main()
{
  cout << sum(112) << endl; 
  cout << product(112) << endl;
  cout << "SUm of N natural numbers : " << SumOfFirstN(5) << endl; 
  cout << "Factorial of numbers : " << FindFactorial(5) << endl; 
  cout << "power of number : " << power(2,3) << endl; 
  int arr[] = {1,2,3,4,5};
  cout << "Sum of array elements : " << sumOfArray(arr,5) << endl; 
}
/*Level 3 (arrays / strings)

Sum of array elements → input [1,2,3,4], output 10.

Base: if index == size return 0.

Step: arr[i] + sum(arr, i+1).

Maximum element in array.

Base: if only one element → return it.

Step: max of current element and recursive result.

Reverse a string → input "abcd", output "dcba".

Base: if string empty → return empty.

Step: last char + reverse(rest).*/