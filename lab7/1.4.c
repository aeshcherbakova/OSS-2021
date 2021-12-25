#include <stdio.h>

extern char **env;
int main(int argc, char *argv[]) 
{
	char **p;
	int cnt = 0;
	for (p = env; *p != NULL && cnt < atoi( args[1]); p++, cnt++)
		printf("%s\n", *p);
}

// env | head -n$1
