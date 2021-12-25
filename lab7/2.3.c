#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  int i = 0;

  for(; i < 10; i++)
    if(pid) fork();

  sleep(10);
  return 0;
}
