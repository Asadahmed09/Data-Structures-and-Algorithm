#include"iostream"
using namespace std;
void changeArr(int arr[],int size){
  for(int i =  0 ; i < size ; i++){
    arr[i] = 2 * arr[i];
  }
}
void checkingPassByValue(int var){
  var = 10;//just to check whether it is modified in main or not
}
int main(){
  int arr[] = {1 , 2 , 3 , 4};
  changeArr(arr,4);
  for(int i = 0 ; i < 4 ; i++){
    cout << "Value : " << arr[i] << endl;
  }
  int var = 1;
  cout << "Value of variable before function : " << var << endl;
  checkingPassByValue(var);
  cout << "Value of variable after function call : " << var << endl;
}