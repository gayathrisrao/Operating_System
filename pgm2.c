#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
	pid_t pid=fork();
	if(pid==0){
		printf("child=>ppid %d,pid %d \n",getppid(),getpid());
		exit(EXIT_SUCCESS);
	}
	else if(pid>0){
		printf("parent=>pid %d\n",getpid());
		printf("waiting for child process\n");
		wait(NULL);
		printf("Child Wait");
	}
	else{
		printf("Unable to create");
	}
	return EXIT_SUCCESS;
}

		
