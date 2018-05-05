#include <stdio.h>
//@Ala Al-haj 05-05-2018
typedef int long new_data_type;
#define PI 3.14

int main(){
	
	double math = 3 * PI;
	new_data_type newVariable = 3;

	printf("The result %0.2f \n ",math);
	printf("New cool variable %ld \n", newVariable);
	char name[150];
	printf("What is your name (Sir/Madam)? ");
	scanf("%s",name);
	printf("Your name is %s \n",name);
	int a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	int sum = a + b;
	printf("Sum = %d \n", sum);
	int multiplication = a * b;
	printf("multiplication = %d \n", multiplication);
	double div = a / b;
	printf("Div = %0.4f \n", div);
	return 0;
}