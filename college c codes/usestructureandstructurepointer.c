//wap to use a structure and a strucute pointer as arguments in a functon
#include <stdio.h>

struct Student { int roll; float marks; };

void show(struct Student s) {
    printf("Roll: %d, Marks: %.2f\n", s.roll, s.marks);
}

void update(struct Student *s, float m) {
    s->marks = m; 
}

int main() {
    struct Student st = {1, 80.0};
    show(st);          
    update(&st, 95.5);  
    show(st);
    return 0;
}