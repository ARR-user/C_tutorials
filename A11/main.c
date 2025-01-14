#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
//
    int count;
    printf("enter no of time to be tossed:");
    scanf("%d",&count);


    int up =1;
    int down =2;
    srand(time(0)); // seed at 0

    // the core func
    int i;
    int heads=0,tails=0;
    for (i=0;i<count;i++)
    {
        int result = (rand() % down-up+1) + 1;
        /*rand() = 0<rand<N
         * what the equation means is N/2 ,
         * N divisble by 2 or doesnt divide perfectly leaving remainder 1
         * it cannot be 0 as head=2 , tail =1 , hence we add 1 to move outcome to tail
         */
        if (result==1)
        {
            heads++;
        }
        else if (result==2)
        {
            tails++;
        }
    }


    printf("the outcome of toss is %d\n heads%d\n tails%d\n",count,heads,tails);



}