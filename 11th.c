/*
 * GUESS APP GAME:
 * WE NEED OUR APP TO HAVE THE FOLLOWING FEATURES:
 * 1- Welcoming screen.
 * 2- ask how many rounds does client want to try
 * 3- Give Instruction of what rules does this app follow.
 * 4- Tell if the guess n is correct or not.
 * 5- Let the client knows how many guess made correctly.
 * 6- End the app with thank massage
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //seed random
    // NULL = 0
    srand(time(0));
    int n;
    printf("\t\t\tWELCOME TO GUESS GAME \n");
    printf("How many rounds you wish to have : ");
    scanf("%i",&n);
    printf("\t\t\t*** THIS IS GUESS GAME WHICH IT TAKES FROM THE RANGE OF [1,10] \n \t\t\t PLEASE DONT ENTER ANY RATHER THAN VALUE OF INT OTHERWISE IT WILL GET CRASHED****\n");
    int i=0;
    int handler;
    int counter=0;
    for(;i<n;++i){
        int random_n=rand()%10+1;
        printf("Guess #%i: ",i+1);
        scanf("%i",&handler);
        if(handler > 0){
            if(handler == random_n){
                ++counter;
                printf("Your guess is correct \n");
            }else{
                printf("Your guess is wrong\n");
            }
        }else{
            printf("Your guess is not allowed in this app which is negative or zero\n");
            exit(1);
        }
    }
    printf("Your correct guess number is %i\n \t\t\t Thank you and have a good day",counter);
}