// c program on how strcpy ,memmove and memcpy working 
#include<stdio.h>
#include<string.h>
void main ()
{
    char a[10]="Abh";
    char b[sizeof(a)];
    // strcpy(b,a);
    memmove(b,a,sizeof(a));
    printf("%s\n",a);
    // memmove(a+3,"iram",5);
    memcpy(b,a,sizeof(a));
    // for (int i=0;i<5;i++)
    //     printf("%d %c\n",i,b[i]);
    printf("%s",b);
    // printf("%s",a);
}