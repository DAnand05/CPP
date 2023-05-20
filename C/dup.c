#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int fd,fd1;
    char buff[25];
    fd=open("test.txt",O_RDWR);
    read(fd,buff,10);
    write(1,buff,10);
    fd1=dup(fd);
    printf("after applying dup \n","%s");
    read(fd1,buff,10);
    write(1,buff,10);
    printf("result printed \n","%s");
}
