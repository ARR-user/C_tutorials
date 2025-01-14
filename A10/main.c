#include <stdio.h>

int main(void) {
    int number = 21;
    int *ptr = &number;
    printf(" pointer memory is mapped to variable number %d\n", *ptr);
    printf("  memory address of pointer %p\n", ptr);


    int number2= 22;
    ptr =&number2;
    printf(" pointer memory is mapped to variable number2 %d\n", *ptr);
    printf("  memory address of pointer %p\n", ptr);
    return 0;
}