#include"iostream"
#include"vector"
using namespace std;
int main()
{
  // vector<int> vec(5,1);// 5 means number of spaces and 1 means the value to store on that places
  // for(int i: vec){
  //   cout << i << endl;
  // }
  // cout << "size : " << vec.size() << endl;
  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  cout << vec.size() << endl << vec.capacity() << endl;
}