#include<stdio.h>
extern int count;
int glo(int count){
// printf("global : %d\n",count);
return count;
}