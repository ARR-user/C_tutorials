

#include <stdio.h>


void  you()
{
    char array[] = {73, 32, 115, 101, 101, 32, 121, 111, 117, 44, 32, 75, 97, 116, 101, '\0'};
    printf("%s\n", array);
}

void hello(void)
{
    char array[] = {72 ,101, 108, 108, 111, 44};

    puts( array);
}

int main(void)
{

    hello();
    you();
}