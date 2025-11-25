#include<stdio.h>
#define SIZE (5)

void main()
{
// int arr[SIZE]={1,2,3,4,5};
// int *ptr = arr;
// printf("1 = %d\n",ptr);
// ptr = ptr + 1;
// printf("2 = %d\n",ptr);
// printf("3 = %d\n",&arr[1]);
int a = 10;
int *p = &a;
printf("%d\n",p);
printf("%d\n",*p);
printf("%p\n",p);
printf("%p\n",&p);

}