/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
   char str[]="HELLO";
   for(int i=0;i<strlen(str);i++){
       if(toupper(str[i])!=str[i]){
           
           printf("%c",toupper(str[i]));
       }
       else{
           printf("%c",tolower(str[i]));
       }
           
       }

    return 0;
}
