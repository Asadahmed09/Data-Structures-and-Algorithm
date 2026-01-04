#include<iostream>
using namespace std;
bool CheckPalindrome(string w)
{
  int i = 0 , j = w.size()-1;
  while(i<j)
  {
    if(w[i]!=w[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}
void FindPalindrome(char arr[5][5], int i , int j, string word , int counter)
{
  if(i < 0 || j < 0 || i >= 5 || j >= 5 )
    return;
  word += arr[i][j];


  if()
  FindPalindrome(arr,i+1,j,word,counter);
  FindPalindrome(arr,i,j+1,word,counter);
  FindPalindrome(arr,i-1,j,word,counter);
  FindPalindrome(arr,i,j-1,word,counter);
}
int main()
{
  
}