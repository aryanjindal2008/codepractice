//Managers and workers data in text and binary files
#include<stdio.h>
int main(){
FILE *ft=fopen("t.txt","w"), *fb=fopen("b.bin","wb");
fprintf(ft,"Mgr: aryan\n");
char *m="Mgr: jindal\n";
fwrite(m,1,9,fb);
fclose(ft);fclose(fb);
printf("Files created successfully.\n");
}