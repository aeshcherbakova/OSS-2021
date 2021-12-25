#include <stdio.h>

extern char **env;
int main(int argc, char *argv[]) 
{
	char **p;
	int cnt = 0;
	for (p = env; *p != NULL; p++, cnt++);
	printf("Number of environment variables: %d\n", cnt);
}

// bash script for checking:
// env | wc -l
