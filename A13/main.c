#include <stdio.h>
#include <stdlib.h>
#include<string.h>
# define INITIAL_SIZE 10



int main(void)

{/* this program dynamically allocates array memory to hold score data
 *
 *
 */
    char answer[]="y";

    double *scores=malloc(INITIAL_SIZE*sizeof(double)); //scores pointer behaves like array when we allocate memory

    int size=INITIAL_SIZE; // some seed value
    int numScores;


    for( numScores=0;strcmp(answer,"y")==0;++numScores)
    {
        if (numScores==size)

        { size*=2;
            scores= realloc(scores ,size*sizeof(double));
            printf("memory size increased\n");
        }
        printf("Enter a number: ");
        scanf("%le",&scores[numScores]);     // the input is placed in scores array of position "numScores"

        printf("Enter another y: ");
        scanf("%s",&answer);
    }



    double sum ;
    for (int loop= 0; loop<numScores; loop++)     // init a second loop for storing scores and to find avg
    {
      sum +=scores[loop];
    }
    double average=(sum/numScores);
    printf("avg is %f",average);
    free(scores);
    return 0;
}




























