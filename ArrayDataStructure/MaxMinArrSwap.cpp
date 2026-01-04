#include"iostream"
using namespace std;
void SwapMinMax(int arr[],int size){
  int min = INT_MAX , max = INT_MIN;
  int minIndex = -1 , maxIndex = -1;
  for(int i = 0 ; i < size ; i++){
    if(arr[i]>max){
      maxIndex = i;
      max = arr[i];
      cout << "Index checkout for max: " << maxIndex << endl;
    }
    if(arr[i]<min){
      minIndex = i;
      min = arr[i];
      cout << "Index checkout for min: " << minIndex << endl;
    }
  }
  cout << "minimum value at : " << minIndex << endl << "Maximum value at : " << maxIndex << endl;
  int dummyValueKeeper = arr[minIndex];
  arr[minIndex] = arr[maxIndex];
  arr[maxIndex] = dummyValueKeeper;
}
int main(){
  int arr[] = {10,20,30,45,54,67,78,89,90};
  int size = sizeof(arr)/4;
  cout << "Value of arr before Swap function for min max ." << endl;
  for(int i = 0 ; i < size ; i++){
    cout << "Arr[" << i << "] : " << arr[i] << endl;
  }
  SwapMinMax(arr,size);
  cout << "Value of arr after Swap function for min max ." << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "Arr[" << i << "] : " << arr[i] << endl;
  }
}