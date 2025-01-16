/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main()
{
   char a;
   printf("enter a character :");
   scanf(" %c",&a);
//   char a=tolower(b);
   if(tolower(a)=='a'|| tolower(a)=='e'||tolower(a)=='i'||tolower(a)=='o'||tolower(a)=='u')
   {
       
       printf("%c is vowel",a);
   }else{
       printf("%c is consonant",a);
   }
   

    return 0;
}
