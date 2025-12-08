#include<stdio.h>
#include<string.h>
 void main()
 {
    const char *ptr = "ABC";
    // char * const ptr = "ABC";
    // ptr[0]='a';
    ptr = "abc";
    for (int i = 0;i<strlen(ptr);i++){
    printf("%c",ptr[i]);
    }
 }