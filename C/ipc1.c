#include<stdio.h>
#include<string.h>

int main(){
    FILE *fd;
    char buff[50];
    sprintf(buff,"Fairfield Institute");
    fd=popen("wc -c","w");
    fwrite(buff,sizeof(char),strlen(buff),fd);
    pclose(fd);
    return 0;
}
