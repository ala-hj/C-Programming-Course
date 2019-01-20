#include <stdio.h>
/*
 *
 *
 * A do...while loop is similar to a while loop, except the fact that it is guaranteed to execute at least one time.
 *
 */

int main() {

    int n;
    printf("Please enter the number down to find out the factorial answer: ");
    scanf("%i",&n);

    if(n < 0 ){
        printf("WRONG ENTRY , NEGATIVE NUMBER IS NOT ALLOWED\n");
    }else{
        int f = 1;
        int i = 1;
        do{
            f = f * i;
            ++i;
        }while(i <= n);
        printf("%i ! = %i\n",n,f);
    }
}