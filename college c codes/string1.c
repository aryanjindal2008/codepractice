//c program to count the number of letters in a sentence 
#include <stdio.h>
int main(){
    char str[100];
    int i, count =0;
    printf("Enter a sentence:");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++){
        if ((str[i]>='A'&& str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        count++;
    }
    printf("Number of letter = %d ",count );
    return 0 ;

}