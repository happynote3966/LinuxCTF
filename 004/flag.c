
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char buf[100];
	char buf2[100];
	fp = fopen("test.txt","r");
	if(fp == NULL){
		printf("Oops! test.txt is not exist!\n");
		exit(1);
	}
	fgets(buf,100,fp);
	fclose(fp);
	fp = fopen("./test2.txt","r");
	if(fp == NULL){
		printf("Hmm... Can you copy?\n");
		exit(1);
	}
	fgets(buf2,100,fp);
	if(strcmp(buf,buf2) == 0){
		printf("linuxctf{you_can_cp_command_to_copy_file}\n");
	}else{
		printf("Hmm... You cheated?\n");
		exit(1);
	}

	fclose(fp);
	return 0;
}
