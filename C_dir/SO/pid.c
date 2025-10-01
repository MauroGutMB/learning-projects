#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

  pid_t pid = fork();

  if(pid < 0){
    fprintf(stderr, "Erro.");
    return 1;
  } else if (pid == 0){
    printf("Process 1 PID(%i)\n", getpid());
    printf("Process 2 PID(%i)\n", getpid());
  } else {
    printf("Process 1 PID(%i) -> Process 2 PID(%i)\n", getpid(), pid);
    wait(NULL);
    printf("Process 1 terminated.");
  }

  return 0;
}
