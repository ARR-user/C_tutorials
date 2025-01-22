#include <stdio.h>
#include <stdlib.h>

int main(void)
{   /*
    *  basic allocation memory
    */


    char *ptr;
    // ptr*=2;
    ptr= malloc(10 * sizeof(char));
    if (ptr == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }
    else
    {
        printf("malloc succeeded\n");
        free(ptr);
        return 0;
    }

}
