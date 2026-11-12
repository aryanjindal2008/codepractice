// C Program to Count Vowels and Consonants in a String
#include <stdio.h>
int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string:");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if (str[i] >= 'a' && str[i] <= 'z'){
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u'){
                    vowels++;
                }
            else{
                consonants++;
            }
        

        }
    }
    printf("Number of vowels=%d\n",vowels);
    printf("Number of consonants=%d\n",consonants);
    return 0;
}