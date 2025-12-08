#include<stdio.h>
 void main (){
    int arr[5][2];
    int i,j;
    for ( i=0;i<5;i++){
        for (j = 0;j < 2;j++){
            printf("1-->%d\n",&arr[i][j]);
            printf("2--->%d\n",&arr[0]);
            printf("3---->%d\n",&arr[1]);

        }
    }
}
 