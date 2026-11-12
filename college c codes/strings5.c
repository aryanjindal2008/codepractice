// Write a program to copy one string into another string without using functions
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied string: %s", str2);
    return 0;
}
