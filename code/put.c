// #include<stdio.h>
// void main ()
// {
//     char a ='a';
//     putchar(a);
//    // char c ='\n';
//     putchar('\n');
//     putchar('\t');
//     char b[] ="abhi";
//     puts(b);
// }

#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
// #include "tlpi_hdr.h"
#ifndef BUF_SIZE /* Allow "cc -D" to override definition */
#define BUF_SIZE 1024
#endif
int
main(int argc, char *argv[])
{
 int inputFd, outputFd, openFlags;
//  mode_t filePerms;
//  ssize_t numRead;
 char buf[BUF_SIZE];
fcntl(0, F_SETFL, O_NONBLOCK);

read(0, buf, BUF_SIZE);
}

