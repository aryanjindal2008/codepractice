//Create and traverse a singly linked list
#include<stdio.h>
#include<stdlib.h>
struct N{int d;struct N* n;};
int main(){
struct N *h=(struct N*)malloc(sizeof(struct N));
h->d=1;h->n=NULL;
struct N* t=h;
while(t){printf("%d ",t->d);t=t->n;}
}