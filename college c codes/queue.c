//Linear queue using an array
#include<stdio.h>
int q[5],f=0,r=-1;
void enq(int x){q[++r]=x;}
void deq(){f++;}
void disp(){for(int i=f;i<=r;i++)printf("%d ",q[i]);printf("\n");}
int main(){enq(1);enq(2);deq();disp();}