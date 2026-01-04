#include "iostream"
#include "cmath"
#include "vector"
using namespace std;
void printFiveRec(int n)
{
  if(n<1)return;
  
  printFiveRec(n-1);
  cout << n << endl;
}
int sumOfDigits(int n)
{
  if(n%10==0)
  {
    return 0;
  }
  return sumOfDigits(n/10) + (n%10);
}
int sum = 0;
void ReverseNumber(int n){
  if(n%10==0)
  {
    return;
  }
  int rem = n%10;
  sum=(sum*10)+rem;
  ReverseNumber(n/10);
}

int helper(int n, int digits)
{
  if (n % 10 == n)
  {
    return n;
  }
  int rem = n % 10;
  return (rem*pow(10, digits - 1)) + helper(n / 10, digits - 1);
}

int RecRev(int n)
{

  int digits = log10(n) + 1;
  cout << digits << endl;
  return helper(n , digits);
}

int ZeroHelp(int n, int c)
{
  if (n % 10 == n)
  {
    return c;
  }
  int rem = n % 10;
  if (rem == 0)
    c++;
  return ZeroHelp(n / 10, c);
}




int CountZero(int n){
  int count = 0;
  return ZeroHelp(n,count);
}

int help(int n, int steps)
{
  if (n % 10 == n && n%10==0)
  {
    return steps;
  }
  if (n % 2 == 0)
  {
    return help(n / 2, ++steps);
  }
  return help(n - 1, ++steps);
}
int reducenumbertoZero(int n)
{
  return help(n,0);
}

//checking if array is sorted or not
bool checkSortedArray(int arr[],int n,int index)
{
  if(index==n)
  {
    return true;
  }
  return arr[index] < arr[index+1] && checkSortedArray(arr,n,index+1);
}


bool linearSearchUsingRecursion(int arr[],int target,int n,int index)
{
  if(arr[index]==target)
  {
    return true;
  }
  if(index == n)
  {
    return false;
  }
  return linearSearchUsingRecursion(arr,target,n,index+1);
}

vector<int> list;

void linearSearch(int arr[], int target, int n, int index)
{
  if (arr[index] == target)
  {
    list.push_back(index);
  }
  if (index == n)
  {
    return ;
  }
  linearSearch(arr, target, n, index + 1);
}
vector<int> goodList(int arr[], int target, int n, int index)
{
  if (arr[index] == target)
  {
    list.push_back(index);
  }
  if (index == n)
  {
    return list;
  }
  return goodList(arr, target, n, index + 1);
}

int main()
{
  // printFiveRec(5);
  // cout << sumOfDigits(1211) << endl;
  // ReverseNumber(1234);
  // cout << sum;
  // cout<< pow(4,3)<<endl;
  // cout << RecRev(1234);
  // cout << CountZero(30204);
  // cout << reducenumbertoZero(123)<<endl;
  int arr[] = {1, 2,3,4,5,6,7,4,8};
  int n = sizeof(arr)/sizeof(arr[0])-1;
  // cout << "Checking sorted array : " << checkSortedArray(arr,n,0);
  // cout << "Checking if target exits : " << linearSearchUsingRecursion(arr,9,n,0);
  // linearSearch(arr,4,n,0);
  // for(int i = 0 ; i < list.size() ; i++)
  // {
  //   cout << list[i] << endl;
  // }
  // vector<int> = goodLis/t(arr, 4, n, 0);
  
}