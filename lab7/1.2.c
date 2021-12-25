#include <stdio.h>

extern char **env;
int main(int argc, char *argv[]) 
{
	char **p;
	int cnt = 0;
	for (p = env; *p != NULL; p++, cnt++);
	printf("Number of command line arguments: %d", argc);
	printf("Number of environment variables: %d\n", cnt);
}
