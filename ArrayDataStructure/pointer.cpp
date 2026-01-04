#include"iostream"
using namespace std;
int main(){
  /*
  int number = 10;
  int* ptr = &number;
  // Now , if do cout << ptr then this means ptr's value which is the address of number variable 
  cout << "Now printing the values of ptr : " << ptr << " And now printing the address of number : " << &number << endl;
  // now , doing some cher khani with ptrs
  int** ptr2 = &ptr;
  //we have made a second pointer which contains the value -> the address of ptr and if we derefference it -> it displays the inner value of ptr which is basically the address of number
  //lets try out
  cout << "Printing ptr2's value : " << ptr2 << endl;
  cout << "now single dereferencing ptr2 : " << **ptr2 << endl;
  cout << "Checking the address of ptr : " << &ptr << endl;


  cout << "Checking address Scenes ." << endl;
  cout << &number << endl;
  cout << &ptr << endl;
  cout << ptr2 << endl;
 int number = 5;
 int* ptr = &number;
 cout << "Ptr : " << ptr << " Number : " << &number << endl;
 cout << "Address of ptr = " << ptr << endl;
 cout << "Modifications : " << *(ptr+0) << endl;*/
 char arr[] = "asad";
 char* ptr = &arr[0 ];
 cout << ptr << endl;
}
