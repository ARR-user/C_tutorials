#include <stdio.h>

int main(void) {
    int array[10];
    array[0] = 10;
    printf("the array memory address is %p\n",array);
    printf("The array memory of first elements are %p ",&array[0]); // the pointer to array and index 0  of array are  always same


    printf("\nthe array for %d", array);
    printf("\nthe array for %d", &array[0]);// array and o index of array expect int values, but it treats address as int values, the compile works but  gives us undefined error


    printf("\nEnter array elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    printf("The array values are");
    for (int j = 0; j < 10; j++) {

        printf(" %d",array[j]);

    }

    return 0;
}