#include <stdio.h>


struct data {                           // create an instane of a struct obj with a single variable
    int integer;
}test;

struct data *ptr;                       // declare pointer variable tp struct
// struct data  test;
int main(void) {
ptr= &test;                             // the pointer points to the address of test instance

test.integer = 5;
    printf("%d\n", test.integer);
// (*ptr).integer = 10;
    printf("%d\n", (*ptr).integer);

// ptr->integer = 20;
    printf("%d\n", ptr->integer);





    return 0;
}


