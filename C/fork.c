#include <sys/types.h>
#include<unistd.h>

int main(){
    pid_t p;
    printf("before fork \n");
    p = fork();
    if(p==0){
        printf("I am child having id %d \n",getpid());
        printf("My parent id is %d \n",getppid());
    }else{
        printf("My child id is %d \n", p);
        printf("I'm parent having id %d \n", getpid());
    }
    return 0;
}
