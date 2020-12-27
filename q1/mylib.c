#include <stdio.h>
#include <stdlib.h>




void shift_element(int* arr, int i){
    arr=arr+i+1;//move the pointer to i+1
    for (int j= 0; j < i; j++)
    {
       arr=arr-1;// move the value to right;
       *arr=*(arr-1);// move the pointer left;
    }
    free(arr);
}
void put (int *arr , int size){
printf("choose number:" );
for(int i = 0 ; i<size ;i++){
  
    scanf("%d", arr+i);
 } 
}
void sort(int *arr , int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < i; j++){
            if(*(arr+i-j)<*(arr+i-1-j)){
                int temp =*(arr+i-j);
                *(arr-j+i) = *(arr+i-j-1);
                *(arr+i-j-1) = temp;
            }
        }
    }
}
void print(int *arr , int size ){
    for (int i = 0; i < size; i++)
    {
        printf(" %d" , *(arr+i));
    }
    
}