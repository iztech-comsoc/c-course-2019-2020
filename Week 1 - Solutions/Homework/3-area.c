#include<stdio.h>
#include<math.h>
// There is a formula that calculates the area of a triangle given it’s three sides. But its hard to evaluate with pen and paper.
// Use basic mathematical operators and find the area of triangle with a,b,c sides.
// The formula or algorithm used is: Area = sqrt(s(s – a)(s – b)(s – c)), where s = (a + b + c) / 2 or perimeter / 2. and a, b & c are the sides of triangle
int main () {
	
	int a,b,c;
	float u,alan;
	
	printf("Ucgenin kenar uzunluklarini giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	
	u=(a+b+c)/2;
	
	alan=sqrt(u*(u-a)*(u-b)*(u-c));
	
	printf("Ucgenimizin alani %f dir",alan);

	return 0;
}
