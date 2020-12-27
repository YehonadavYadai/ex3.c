#include <stdio.h>
#include "mylib.h"
#include <stdlib.h>
#define size 50
int main () {
int *arr = (int*) malloc(sizeof(int)*size);
if(arr==NULL) printf("error\n");
put(arr,size); 
sort(arr,size);
print(arr,size);
}