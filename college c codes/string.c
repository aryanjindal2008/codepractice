// C Program to Reverse a String Without Using String Functions
#include <stdio.h>
int main(){
    char str[100];
    int i = 0, j = 0;
    char temp;
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL)
    {
        while (str[i] != '\0')
        {
            if (str[i] == '\n'){
                str[i] = '\0';
                break;
            }
            i++;}
        if (i > 0){
            j = i - 1;
            i = 0;
            while (i < j){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }
        }
        printf("Reversed string: %s\n", str);
    }

    return 0;
}