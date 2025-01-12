#include <stdio.h>
#include <stdlib.h>
void main() {
    /* In this code we will see the use of scanf to get user io
     * char is inclusive of all datatypes
     *
     *
     *
     */

    char x[20]="hello world";
    char y[20];
    char z[20];
    printf(x);

    printf("Enter your name:");
    scanf("%c",&y);
    printf("Enter your last name:");
    scanf("%s",&z);

    printf("the name is %s %s", y,z);
}