/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int findMax(int a,int b,int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > c){
    return b;
        
    }
    else{
        return c;
    }
    
}

int main()
{
  int a=1,b=5,c=4;
int result=findMax(a,b,c);
printf("%d the maximum numbers is",result);

    return 0;
}
