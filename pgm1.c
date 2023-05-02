#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
void child(){
	printf("Hello");
}
void parent(){
	printf("MainTask");
}
int main(){
	pid_t pid=fork();
	if(pid==0){
		child();
		exit(EXIT_SUCCESS);
	}
	else if(pid>0){
		parent();
	}
	else{
		printf("UNABLE TO CREATE");
	}
	return EXIT_SUCCESS;
}
