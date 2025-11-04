#include<stdio.h>
#include<string.h>
void main()
{
    char name[] = "Abhiram";
    char buff[] = "1234567890";
    char buff2[50] = "";
    char temp[2];
    for( int i = 0;i < 3;i++)
    {
        temp[0] = name[i];
        temp[1] = '\0';
        strcat(buff2,temp);
    }

    for( int i = (strlen(buff)-6);i < strlen(buff);i++)
    {
        temp[0] = buff[i];
        temp[1] = '\0';
        strcat(buff2,temp);
    }

    printf("%s", buff2);
}