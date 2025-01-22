/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
	int arr[]= {3,8,1,5,4};
	int len=sizeof(arr)/sizeof(arr[0]);
	int large=arr[0];
	for(int i=1; i<len; i++) {
		if(large<arr[i]) {
			large=arr[i];
		}
	}
	printf("largest element is %d \n",large);

	int small=arr[0];
	for(int i=1; i<len; i++) {
		if(small>arr[i]) {
			small=arr[i];
		}
	}
	printf("smallest element is %d ",small);
	return 0;
}
