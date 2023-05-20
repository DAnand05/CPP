#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int fd;
    char buff[30];
    fd=open("test.txt",O_RDWR);
    read(fd,buff,30);
    write(1,buff,30);
}
