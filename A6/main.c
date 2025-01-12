#include <stdio.h>
#define _pie_ 3.141592653589793

int main(void) {
    /*
     * conversion of datatypes usually in c# or py high level lang have int (variable name) to conv
     *
     * datatypes like float , int , long , short ,char  etc can be handled
     */
    float radius;

    printf(" to find the area enter radius of circle\n");
    scanf("%f", &radius);

    float area= _pie_ * radius * radius; // 2piR
    printf("The area of the circle is %f\n", area);
    printf("The area of the circle is %d\n", (int)area);
    return 0;
}