/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int add(int a,int b) {
	return a+b;
}
int subt(int a,int b) {
	return a-b;
}
int mult(int a,int b) {
	return a*b;
}
int divi(int a,int b) {
	return a/b;

}
int main() {
	int a, b, oper;

	printf("select operation\n");
	printf("1.addition\n");
	printf("2.subtraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("enter your choice ");
	scanf("%d",&oper);

	printf("enter two numbers ");
	scanf("%d%d",&a,&b);


	switch (oper) {
	case 1:
		printf("the addition is%d\n", add(a,b));
		break;
	case 2:
		printf("the subtraction is %d\n", subt(a,b));
		break;
	case 3:
		printf("the multiplication is %d\n", mult(a,b));
		break;
	case 4:
	{
		printf("the division is %d\n", divi(a,b));
	}
	break;
	default:
		printf("invalid operation\n");
		break;
	}

	return 0;
}
