#include <stdio.h>


//  create a struct stat
struct stats {
  int points;
  int games;

};

// create an instance of struct with player array of size 5
struct stats player[5];
int counter;

int main(void) {
    for (counter=0; counter<5; counter++)
    {
        printf("Enter %d player points", counter+1);
        scanf("%d",&player[counter].points);
        printf("Enter %d player games", counter+1);
        scanf("%d", &player[counter].games);



    }
    printf("\n");
    for (counter=0; counter<5; counter++)
    {   float ppg = player[counter].points/player[counter].games;
        printf("the %dplayer has %f average\n ",counter+1, ppg);
    }
N
    return 0;
}