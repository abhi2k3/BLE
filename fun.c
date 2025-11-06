#include<stdio.h>
#include "count.h"
int count;
//int glo();
static int counter;
int func(){
    counter = counter + 1;
    glo(count);
}
void main(){
    func(); 
    func();
    func();
    func();
    func();
    printf("static : %d\n",counter);
    printf("global : %d\n",count);
}