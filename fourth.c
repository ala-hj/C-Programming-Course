#include <stdio.h>
#define true 1
#define false 0

int main() {
	//Boolean algebra - logical operation
	// AND => && , OR => || , NOT => !

	int group[] = {false, true};
	printf("---- Logical AND ----\n");
	printf("AND - 0*0 = %d\n", group[0]*group[0]);
	printf("AND - 0*1 = %d\n", group[0]*group[1]);
	printf("AND - 1*0 = %d\n", group[1]*group[0]);
	printf("AND - 1*1 = %d\n", group[1]*group[1]);
	printf("---- Logical OR ----\n");
	printf("OR - 0+0 = %d\n", group[0] + group[0]);
	printf("OR - 0+1 = %d\n", group[0] + group[1]);
	printf("OR - 1+0 = %d\n", group[1] + group[0]);
	printf("OR - 1+1 = %d\n", group[1] + group[1]);
	printf("---- Logical NOT ----\n");
	printf("AND - 0*0 = %d\n", !(group[0]*group[0]));

	//If condeition
	int a, b, c;
	printf("Enter the following values: \n");
	printf("a:");
	scanf("%d",&a);
	printf("\nb:");
	scanf("%d",&b);
	printf("\nc:");
	scanf("%d",&c);
	printf("\n");
	if (a>b && a>c)
	{
		printf("The following number %d is the biggest value,\nthe rest values are %d %d\n", a,b,c);
	} else if(b>c && b>a){
		printf("The following number %d is the biggest value,\nthe rest values are %d %d\n", b,a,c);
	} else{
		printf("The following number %d is the biggest value,\nthe rest values are %d %d\n", c,b,a);
	}
	printf("--- Testing if condeition for logical NOT ---\n");
	if (a != 0)
	{
		printf("Congrates , your a value %d is not equal to 0\n", a);
	}else{
		printf("ohhh i am sad for that but your value is equal %d\n", a);
	}

	//Switch 

	switch(b){
		case 0: printf("your b is equal to 0\n");break;
		case 10 :printf("Your b is perfetly fine\n");break;
		default: break;
	}

	return 0;
}