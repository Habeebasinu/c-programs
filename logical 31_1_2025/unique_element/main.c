/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int removeDup(int arr[], int n) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[i]==arr[j]) {
				for (int k=j; k<n-1; k++) {
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	return n;
}
void Intersect(int arr1[],int len1,int arr2[],int len2) {
	printf("intersection of both arrays ");
	for (int i=0; i<len1; i++) {
		for (int j = 0; j <len2; j++) {
			if (arr1[i]==arr2[j]) {
				printf("%d ",arr1[i]);
				break;
			}
		}
	}
	printf("\n");
}
int main() {
	int arr1[] = {1, 2, 2,1};
	int arr2[] = {2,2,3};
	int len1 = sizeof(arr1)/sizeof(arr1[0]);
	int len2 = sizeof(arr2)/sizeof(arr2[0]);

	len1=removeDup(arr1,len1);
	len2=removeDup(arr2,len2);
	printf("array1 after removing duplicates ");
	for (int i=0; i<len1; i++) {
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("array2 after removing duplicates ");
	for (int i=0; i<len2; i++) {
		printf("%d ",arr2[i]);
	}
	printf("\n");

	Intersect(arr1,len1,arr2,len2);

	return 0;
}


