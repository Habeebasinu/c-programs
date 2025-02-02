/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int result=1;
   int arr[]={1,2,3,4};
   int len=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<=len;i++){
       for(int j=0;j<len-i-1;j++)
       if(arr[j]<arr[j+1]){
           int temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
       }
   }
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
         result*=arr[i];
        
    }
    printf("\n product of three maximum number %d",result);
    return 0;
}
