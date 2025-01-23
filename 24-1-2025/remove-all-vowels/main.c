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
    char str[]="wElcome";
    for(int i=0;i<=strlen(str);i++){
        if(tolower(str[i])!='a' && tolower(str[i] )!='e' && tolower(str[i])!='i' &&
            tolower(str[i] )!= 'o' && tolower(str[i])!='u'){
            printf("%c",str[i]);
        }
    }
    return 0;
}
