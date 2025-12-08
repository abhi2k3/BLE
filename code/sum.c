// #include<stdio.h>
// void sumi(int n);
// int sumr(int n);

// void main(){
//     int n;
//     printf("enter the number :\n");
//     scanf("%d",&n);
//     printf("Iterative Method\n");
//     sumi(n);
//     printf("Recursive Method\n");
//     printf("%d",sumr(n));

// }
// void sumi(int n)
// {
//     int sum = 0,i;
//     // sum = n * (n + 1) / 2;
//     for(i = 1;i < n + 1;i++)
//     {
//         sum = i + sum;
//     }
//     printf("%d\n",sum);
//  }

// int sumr(int n)
// {
//     if(n <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (n + sumr(n - 1));
//     }
// }
 
#include<stdio.h>
void main()
{
    char a =65, b= 65,c;
    c = a + b;
    printf("%d",c);
}