#include<stdio.h>
#include<string.h>
void main ()
{
    char a[]="Abhi";
    char b[]="ram";
    char c[10];
    strcat(c,a);
    strcat(c,b);
    printf("%s",c);

}