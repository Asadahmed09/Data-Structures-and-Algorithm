
#include <iostream>
using namespace std;
int main()
{
  int a[5] = {4,5,3,4,8};
  for (int i = 0; i < 5; i++)
  {
    int min = i;
    int j = i + 1;
    while(j < 5 && a[min] < a[j])
    {
        min = j;
        j++;
    }
      
    swap(a[i], a[min]);
  }
  for (int i = 0; i < 5; i++)
    cout << a[i] << " ";
}
