#include<stdio.h>
 void main ()
 {
    int ar[5];
    int n = 1 ;
    for(int i = 0 ;i < 5;i++){
        // scanf("%d\n",&n);
        ar[i] = n;
        n++;
    }
    for(int i = 0 ;i < 5;i++){
     printf("%d\t",ar[i]);
    }
    printf("\n");
    int arr[5]={6,7,8,9,10};
    for(int i = 0 ;i < 5;i++){
     printf("%d\t",arr[i]);
    }
 }