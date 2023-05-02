#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
void main(){
	struct stat sfile;
	stat("pgm3.c",&sfile);
	printf("st_size='%ld\n'",sfile.st_size);
}

