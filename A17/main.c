#include <stdio.h>
/*
 *create an instance of a strucutre and print heir assigned values
 */

struct {
    int a;
    char b;
    float c;
}example;



int main(void) {
    example.a = 1;
    example.b = 'a';
    example.c = 3.14;

    printf( "integer val %d\n", example.a);
    printf( "character val %c\n", example.b);
    printf( "float val %f\n", example.c);
    return 0;
}