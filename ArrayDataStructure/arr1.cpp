#include"iostream"
using namespace std;
int main(){
  int arr [5] = {10,20,30,40,50};
  int smallest  = INT_MAX;
  int largest  = INT_MIN;
  for(int i = 0 ;i < (sizeof(arr)/4) ; i++){
    smallest = min(arr[i],smallest);
    largest = max(arr[i],largest);
  }
  int indexOfLargest = -1;
  int indexOfSmallest = -1;
  for(int i = 0 ; i < (sizeof(arr)/4) ; i++){
    if(arr[i]==smallest){
      indexOfSmallest = i;
    }
    if(arr[i]==largest){
      indexOfLargest = i;
    }
  }
  cout << "The smallest number in an array is : " << smallest << " And the index is : " << indexOfSmallest << endl;
  cout << "The largest number in an array is : " << largest << " And the index is : "  << indexOfLargest << endl;
}