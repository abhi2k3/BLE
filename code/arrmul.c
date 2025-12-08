#include<stdio.h>
#define size 2
  void main (){
    int i ,j,k;
    int arr1[size][size], arr2[size][size], mul[size][size]={0};

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            printf("elements at %d ,%d : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    } 

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            printf("elements at %d ,%d : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            for(k = 0; k < size;k++)
            {
            mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    } 

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");     

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    } 
    printf("\n");

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    } 
    printf("\n");
}