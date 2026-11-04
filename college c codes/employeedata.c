//wap to print employee data using union and type def 
#include <stdio.h>

typedef struct { int id; float salary; } Emp;

int main() {
    int n;
    scanf("%d",&n);

    Emp e[n];

    for(int i = 0; i < n; i++) {
        printf("Emp %d - Enter ID & Salary: ", i+1);
        scanf("%d %f", &e[i].id, &e[i].salary);
    }

    for(int i = 0; i < n; i++) {
        printf("Emp %d -> ID: %d, Salary: %.2f\n", i+1, e[i].id, e[i].salary);
    }
    
    return 0;
}