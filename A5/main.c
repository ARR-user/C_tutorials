#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, denom;


    printf("enter num ");
    scanf("%d", &num);

    printf("enter denom");
    scanf("%d",&denom);

    if (num % denom == 0)
    { printf("division by zero");

    }
    else
    { printf("there is a remainder");

    }
    return 0;
}



