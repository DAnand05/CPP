#include<stdio.h>

int main(){
    FILE *fd;
    char buff[50];
    fd=popen("ls","r");
    fread(buff,1,40,fd);
    printf("%s\n",buff);
    pclose(fd);
    return 0;
}
