#include<stdio.h>
int fib(int a);
void fibi(int n);

void main ()
{
    int n,i,c;
    printf("enter a number \n");
    scanf("%d",&n);
    printf("\nIterative Fibonacci:\n");
    fibi(n);
    printf("\n------------\nRecursive Fibonacci:\n");
    for(i = 0;i < n;i++)
    {
        c = fib(i);
        printf("%d\n",c);
    }
}

int fib(int a)
{
    if (a < 0)
    {
        printf("enter a valid number \n");
    }
    else if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}

void fibi(int n){
int a,b,c,i;
printf("enter a,b,c \n");
scanf("%d %d %d",&a,&b,&c);
printf("-----------\n");
for(i = 0;i < n;i++){
    c = a + b;
    printf("%d\n",c);
    a = b;
    b = c;
    
}

}