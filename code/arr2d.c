#include<stdio.h>
 void main ()
 {
    int ar[5][5]; 
    int *p = &ar;
    printf("%d\n",p);
    p = p + 1;
    printf("%d\n",p); 
}