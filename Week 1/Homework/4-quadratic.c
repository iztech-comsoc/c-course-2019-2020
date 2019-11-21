#include<stdio.h>
#include<math.h>

// We all know we have a formula to find roots of a quadratic equation.
// Use basic mathematical operators and sqrt function from math.h, then find the roots of quadratic equation a*x^2 + b*x + c.
// Use the formula (+-b  + (sqrt(delta)))/2*a, where delta = b*b - 4*a*c and a, b & c are the coefficents of the equation.

int main ()   {
	
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("denklemin a sini giriniz:");
	scanf("%d",&a);
	printf("denklemin b sini giriniz:");
	scanf("%d",&b);
	printf("denklemin c sini giriniz:");
	scanf("%d",&c);
	
	delta = b*b - 4*a*c;
	
	x1 = (-b  + (sqrt(delta)))/2*a;
	x2 = (-b  - (sqrt(delta)))/2*a;
	
	printf("denklemin birinci koku %f, ikinci koku %f dir",x1,x2);
	
	
	
	
	return 0;
}
