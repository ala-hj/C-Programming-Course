#include <stdio.h>
#include <math.h>
int main(){

	int sub;
	int a,b;
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	sub = a - b;
	printf("sub result is %d \n",sub);
	//________________________________________
	//Prefix ++ , --.
	int c=4;
	printf("C: %d,",c);
	printf("Prefix - Increment C: %d, ",++c);
	printf("Prefix - Decrement C: %d \n",--c);
	//Postfix ++ , --.
	printf("Postfix - Increment C: %d, ",c++);
	printf("Postfix - Decrement C: %d \n",c--);
	printf("Checkout result C: %d \n",c);
	// Math library.
	double result;
	 result = sqrt(4);
	 printf("The squre root of 4 is %0.2f \n",result);
	 double power;
	 power = pow(2,4);
	 printf("The power of 4 %0.2f \n",power);
	return 0;
}