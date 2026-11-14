// wap to demonstrate use of pointer for dynamic allocation
#include<stdlib.h>
#include<stdio.h>
int main(){
int *p=(int*)malloc(2*sizeof(int));
p=(int*)calloc(2,sizeof(int));
p=(int*)realloc(p,4*sizeof(int));
free(p);
printf("Dynamic memory allocated and freed.\n");
}