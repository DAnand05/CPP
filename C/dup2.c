#include<unistd.h>
#include<fcntl.h>

int main(){
    int fd,fd1;
    char buff[20];
    fd=open("test.txt",O_RDWR | O_APPEND);
    read(fd,buff,10);
    write(1,buff,10);
    dup2(fd,fd1);
    //Appending new data
    char buff2[10] = {',', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's'};
    read(fd1,buff2,20);
    write(1,buff2,20);
}
