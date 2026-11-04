//write a program to print student data using a structure
#include <stdio.h>
struct student{
    int rollnum;
    char name[50];
    float marks;

};
int main(){
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student students[n];
    for(i=0;i<n;i++){
        printf("Enter the details of students %d \n",i+1);
        
        printf("Enter roll number:");
        scanf("%d",&students[i].rollnum);
        
        printf("\nEnter name : ");
        scanf("%s",&students[i].name);

        printf("\nEnter marks: ");
        scanf("%f",&students[i].marks);


    }
    for (i=0;i<n;i++){
        printf("Student %d:\n",i+1);
        printf("roll number: %d\n ",students[i].rollnum);
        printf("Name : %s\n ",students[i].name);
        printf("Marks :  %.2f\n",students[i].marks);
        
    }
    return 0;
}