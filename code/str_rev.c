#include<stdio.h>
#include<string.h>
 void main ()
 {
    char Name[] = "Abhiram";
    char rev[sizeof(Name)];
    int i,n = 0;
    for (i = (strlen(Name)-1);i >= 0; i-- ){
        rev[n] = Name[i];
        n++;
    }
    printf("%s",rev);
 }