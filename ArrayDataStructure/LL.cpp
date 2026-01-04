#include <iostream>
using namespace std;
int find(int n)
{
  if (!n)
  {
    return 1;
  }
  if (n < 0)
  {
    return 0;
  }

  return find(n - 1) + find(n - 2);
}
int main()
{

  cout << find(5);
