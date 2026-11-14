//Stack using an array with push, pop, and display
#include<stdio.h>
int s[5],t=-1;
void push(int x){s[++t]=x;}
void pop(){if(t>=0)t--;}
void disp(){for(int i=0;i<=t;i++)printf("%d ",s[i]);printf("\n");}
int main(){push(10);push(20);pop();push(30);disp();}