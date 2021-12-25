#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  int i = 0;

  for(; i < 100; i++)
    if(pid) fork();

  sleep(5);
  return 0;
}
