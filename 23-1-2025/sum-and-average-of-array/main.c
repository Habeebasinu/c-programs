/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{    int sum=0;
    int arr[]={1,2,5,8,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        sum+=arr[i];
    }
    printf("sum of array is %d \n",sum);
    int avg=0;
    for(int i=0;i<len;i++){
        avg=sum/len;
    }
    printf("avarage is %d ",avg);
    return 0;
}
