//C Program to Calculate the Length of a String Without Using a Predefined Function
#include <stdio.h>
int main (){
    char str[100];
    int i, count =0;
    printf("Enter a string:");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++){
        if (str[i]!='\n'){
            count++;
        }
    }
    printf("Length=%d",count);
    return 0;

}