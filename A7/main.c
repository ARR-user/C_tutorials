#include <stdio.h>

int main(void)
{/*
 * understanding array and sizeof operator in this func
*/
 int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 printf("sizeof(array): %zu\n", sizeof(array));// unsigned sizeof object
 printf("sizeof(array[0]): %zu\n",sizeof(array[0]) );
 printf(" The array has %d elemenst",sizeof(array)/sizeof(array[0]));
 return 0;



}
