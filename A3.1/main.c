#include <stdio.h>
#include <stdlib.h>

void main() {
    /* In the previous example we used static allocation of memory char a[20]
     * here we use pointers instead of array to hold memory
     * we will get to malloc soon , but this is a good intro to dynamic allocation of memory
     *
     *
     */
    char *xp;
    char *yp;

    printf("enter first name:");
    scanf("%msp", &xp);// %ms is not available in turbo c but in later iterations
    printf("enter second name:");
    scanf("%msp", &yp);

    printf("the  firsta and last name is %s %s",xp,yp);
    free(xp);// free memory or deallocate memory on stack
    free(yp);
}