/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fibonacci(int n){
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
    int c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
    }
    
}

int main()
{
    int n;
    printf("enter a limit");
    scanf("%d",&n);
    fibonacci(n);
    
    

    return 0;
}
