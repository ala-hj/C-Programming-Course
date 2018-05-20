#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
	double r, h;
	printf("Enter the raduis: \n");
	scanf("%lf", &r);
	printf("Enter the height: \n");
	scanf("%lf", &h);
	double v = (PI * pow(r, 2) * h) / 3;
	printf("the volume is %lf \n", volume);
	double sr = PI * r * (r + sqrt(pow(r, 2) + pow(h, 2)));
	printf("the surface is %lf\n", sr);

}

/*
int main(){
	printf("*** Finding arithmetic average ***\n");
	int a,b,c;
	printf("Enter three values: ");
	scanf("%d" "%d" "%d", &a, &b, &c);
	double average = ((double)a+b+c)/3;
	printf("The average of the three integers is %lf\n",average);
	if(a>b && a>c){
		printf("The greatest value of %d %d %d is %d \n",a,b,c,a );
	} else if(b>a && b>c){
		printf("The greatest value of %d %d %d is %d \n",a,b,c,b);
	} else{
		printf("The greatest value of %d %d %d is %d \n",a,b,c,c);
	}
}*/
/*
int main(){
	//ex 4
	int a,b,c,d,x;
	printf("This application is used to solve function\n");
	printf("y=a*x+b)/(x*c+d)\n");
	scanf("%d" "%d" "%d" "%d" "%d",&a, &b, &c,&d, &x);
	double result = ((float)a*x+b)/(x*c+d);
	printf("The result of function is => %lf \n", result);
}*/
/*
int main() {
	//Exercise 3 -> Square Function
	int a, b, c, x;
	printf("This program is used to solve Square Function task.\n");
	printf("y=a*x^2+b*x+c\n");
	scanf("%d" "%d" "%d" "%d", &a, &b, &c, &x);
	int result = a * pow(x, 2) + b * x + c;
	printf("The result of square function is => %d\n", result);
	return 0;
}
*/