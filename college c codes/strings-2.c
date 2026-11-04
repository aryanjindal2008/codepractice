//wap to count the number of words in a sentence 
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i, count=0;
    printf("Enter a sentence:");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            count++;

        
    }
    count++;
    printf("Number of words=%d",count);
    return 0;     
}