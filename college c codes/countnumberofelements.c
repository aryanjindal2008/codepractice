//wap to count number of letter in words of a sentence 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count = 0;
    printf("enter a sentence:");
    fgets(str, 100, stdin);
    for(int i = 0; str[i]!='\0'; i++)
        {

        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            count++;
        }
    printf("Number of letters= %d", count);
    return 0;
}