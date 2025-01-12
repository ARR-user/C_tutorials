#include <stdio.h>
int main(void) {
    /* A simple if else ladder
     *
     */

    int number;
    printf(" enter a  3 digit number\n");
    scanf("%d", &number);

    if (number >=0 && number <=100) {
        printf("The number is between 1 and 100");
    }
    else if (number >=100 && number <=200) {
        printf("The number is between 100 and 200");
    }

    else if (number >=200 && number <=300) {
        printf("The number is between 200 and 300");

    }
    else if (number >=300 && number <=400) {
        printf("The number is between 300 and 400");

    }
    else if  (number >=400 && number <=500) {
        printf("The number is between 400 and 500");
    }
    else {
        printf("The number is not present");
    }

     return 0;
}