#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int a;
    int b;
    a=rand()%10;
    b=rand()%10;
    int answer;
    printf("Answer this multiplication question %d*%d",a,b);
    scanf("%d",&answer);
    if(answer == a*b){
        printf("Bravo ! you made , %d",a*b);
    }else{
        printf("Sorry your answer %d , \n this is the right answer %d\n GOOD LUCK !",answer,a*b);
    }
}