#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  if (pid == 0)
    printf("pid of child process = %d, pid of parnt process = %d", getpid(), getppid());

  return 0;
}
