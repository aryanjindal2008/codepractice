//code for comparision of two strings
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;
    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) != NULL) {
        while (str1[i] != '\0') {
            if (str1[i] == '\n') {
                str1[i] = '\0';
                break;
            }
            i++;
        }
    }
    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) != NULL) {
        i = 0;
        while (str2[i] != '\0') {
            if (str2[i] == '\n') {
                str2[i] = '\0';
                break;
            }
            i++;
        }
    }
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0 && str1[i] == str2[i]) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}