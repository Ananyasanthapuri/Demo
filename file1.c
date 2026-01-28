#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
void main()
{
	pid_t id1;
	id1=fork();
	if(id1>0){
		wait(NULL);
	printf("parent process\n");
	}
	else
	{
		printf("child process\n");
	}
}


