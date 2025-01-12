#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{  /* math.h preprocessor directive
    *conditional statements
    */

    float a,b,c;
    float x1,x2;
    printf(" check roots of  a quadratic formula ");
    printf("Enter values for a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);


    // Math
    float discriminant= (b*b-4*a*c);
    x1=(-b+(sqrt(discriminant)))/(2*a);
    x2=(-b-(sqrt(discriminant)))/(2*a);

    // if else conditional to find quadratic formula
    if (discriminant < 0) {
        printf("roots of a quadratic formula  are imaginary");

    }
    else if (discriminant == 0) {
        float r =- b / (2*a);
        printf("root of a quadratic formula is%.2f ",r);

    }
    else {
        printf("roots of a quadratic formula are real ");
        printf("roots of a quadratic formula are real %.2f%.2f", x1,x2);
    }

  return 0;
}