#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  if (pid == 0)
	printf("pid of child process = %d, pid of parnt process = %d\n", getpid(), getppid());
  sleep(10);
  return 0;
}
