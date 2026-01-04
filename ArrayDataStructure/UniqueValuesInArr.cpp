#include"iostream"
using namespace std;
void GetUniqueElements(int arr[],int size){
  int countForUnique = 0;
  for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
      if(arr[i] == arr[j]){
        countForUnique++;
        cout << "Count is ++ for "<< arr[i] << endl;
      }
    }
    if(countForUnique==1){
      cout << "Unique element in array : " << arr[i] << endl;
    }
    countForUnique = 0;
  }
}
int main(){
  int arr[] = {1,2,3,1,2,3,4};
  int size = sizeof(arr)/4;
  GetUniqueElements(arr,size);
}