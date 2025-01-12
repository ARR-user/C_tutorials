#include <stdio.h>
#define _pie_ 3.141592653589793

int main(void) {
    /*
     * Starting from this example we will use industry standard of opening a main func with int
     *
     * datatypes like float , int , long , short ,char have fixed bytes of length
     */
    float radius;

    printf(" to find the area enter radius of circle\n");
    scanf("%f", &radius);

    float area= _pie_ * radius * radius; // 2piR
    printf("The area of the circle is %f\n", area);
    return 0;
}