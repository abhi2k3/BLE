#include "count.h"
#include<stdio.h>
extern int count;
void glo(count){
// printf("global : %d\n",count);
count = count + 1;

}