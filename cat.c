#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char *argv[])
{
int fd1,fd2,n;
char ch;
fd1=open(argv[1],O_RDONLY); //open the file in read mode
fd2=open(argv[2],O_RDONLY);
if(fd1 == -1 || fd2 == -1)
{
perror(":");
exit(-1);
}
else 
printf("\nFiles successfully opened.....\n");
while(1){
n=read(fd1,&ch,1); //reads a character from the file
if(n==0) break;
else write(1,&ch,1);
}
while(1){
n=read(fd2,&ch,1); //reads a character from the file
if(n==0) break;
else write(1,&ch,1);
}
close(fd1);
close(fd2);
return 0;
}
