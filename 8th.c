#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int i=1;
    while(1){
        int random_number = rand()%20-10;
        printf("#%i",i);
        printf("Random number = %i\n",random_number);
        ++i;
        if(random_number == 0){
            break;
        }
    }

}