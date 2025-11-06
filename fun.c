#include<stdio.h>
int count;
int glo();
int func(){
    static int counter;
    counter = counter + 1;
    count = count + 1;
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