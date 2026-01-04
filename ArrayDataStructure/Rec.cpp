#include "iostream"
using namespace std;
void ModifyString(string &one , string &two, int size,int i )
{
  if(i==size)
  return;
  if(one[i] != 'a')
  {
    two += one[i];
  }
  ModifyString(one,two,size,++i);
}
void SubSet(string their , string our , int index)
{
  if(index==their.size())
  {
    cout << our << " ";
    return;
  }
  SubSet(their,our + their[index] , index+1);

  SubSet(their,our, index+1);
}
int main()
{
  // string one = "baccad";
  // string two ;
  // ModifyString(one,two,one.size(),0);
  // cout << "Result " << two;

  SubSet("AB","",0);
}