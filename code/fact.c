#include<stdio.h>
void facti(int n);
int factr(int n);

void main(){
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    printf("Iterative Method\n");
    facti(n);
    printf("Recursive Method\n");
    printf("%d",factr(n));

}
void facti(int n)
{
    int fact = 1,i;
    for(i = 1;i < n + 1;i++)
    {
        fact = i * fact;
    }
    printf("%d\n",fact);
 }

int factr(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * factr(n - 1));
    }
}
 