#include<stdio.h>
int main(){
  int size;
  printf("Enter size for both arrays: ");
  scanf("%d", &size);
  int a[size];
  int b[size];
  int i = 0;
  printf("Enter values for array a \n");
  for(i = 0 ; i < size ; i++){
    printf("Enter value: ");
    scanf("%d" , &a[i]);
  
  }
  printf("Enter values for array b \n");
  for(i = 0 ; i < size ; i++){
    printf("Enter value: ");
    scanf("%d" , &b[i]);
  
  }
  int size2 = size * 2;
  int c[size2];
  int j = 0;
  for(i = 0 ; i < size2 ; i++){
      if(i < size){
        c[j] = a[i];
      }
      else
      {

        c[j] = b[i - size];
      }
      j++;
  }

  printf("Final merged c array: ");
  for(i = 0 ; i < size2 ; i++){
    printf("%d  ", c[i]);
  }


}