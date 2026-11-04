// wap to demonstrate use of pointer for dynamic allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int *ptr_calloc = NULL;
    int n = 5, i;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed using malloc!\n");
        return 1;
    }

    printf("--- 1. MALLOC ---\n");
    printf("Initial (garbage) values in malloc memory:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    printf("Values after assignment:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n\n");

    ptr_calloc = (int *)calloc(n, sizeof(int));

    if (ptr_calloc == NULL)
    {
        printf("Memory allocation failed using calloc!\n");
        free(ptr);
        return 1;
    }

    printf("--- 2. CALLOC ---\n");
    printf("Initial values in calloc memory (automatically 0):\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr_calloc[i]);
    }
    printf("\n\n");
    int new_n = 8;
    int *temp = (int *)realloc(ptr, new_n * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed using realloc!\n");
        free(ptr);
        free(ptr_calloc);
        return 1;
    }
    ptr = temp;

    for (i = n; i < new_n; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    printf("--- 3. REALLOC ---\n");
    printf("Values after resizing memory from %d to %d elements:\n", n, new_n);
    for (i = 0; i < new_n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n\n");

    free(ptr);
    free(ptr_calloc);
    ptr = NULL;
    ptr_calloc = NULL;

    printf("--- 4. FREE ---\n");
    printf("Memory successfully freed and pointers set to NULL.\n");

    return 0;
}