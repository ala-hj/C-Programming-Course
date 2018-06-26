#include <stdio.h>

int main() {
    char entry;

    printf("Which operation arithmetic you wish to use\n \t1.+\t2.-\t3./\t4.* .\n");
    printf("Enter: ");
    scanf(" %c",&entry);
    int a1,a2;
    int result;
    double division_result=0;
    switch (entry){
        case '+':
            printf("You Picked +\n Enter first value: ");
            scanf("%d",&a1);
            printf("Second value: ");
            scanf("%d",&a2);
            result=a1+a2;
            printf("The result of opration %c = %d\n",entry,result);
            break;
        case '-':
            printf("You Picked - \n Enter first value: ");
            scanf("%d",&a1);
            printf("Second value: ");
            scanf("%d",&a2);
            result=a1-a2;
            printf("The result of opration %c = %d \n",entry,result);
            break;
        case '/':
            printf("You Picked / \n Enter first value: ");
            scanf("%d",&a1);
            printf("Second value: ");
            scanf("%d",&a2);
            division_result=(float)a1/a2;
            printf("The result of opration %c = %f \n",entry,division_result);
            break;
        case '*':
            printf("You Picked * \n Enter first value: ");
            scanf("%d",&a1);
            printf("Second value: ");
            scanf("%d",&a2);
            result=a1*a2;
            printf("The result of opration %c = %d \n",entry,result);
            break;
        default:
            printf("Invlaid data \n");
            break;
    }
    char answer;
    printf("Do you like our App (y/n)? ");
    scanf(" %c",&answer);
    if(answer == 'Y' || answer == 'y'){
        printf("Thanks!\n");
    } else if (answer == 'N' || answer == 'n'){
        printf("We will make it up whenever we have the chance , thank you!\n");
    }else{
        printf("sorry what do u mean ?\n");
        return 1;
    }
}