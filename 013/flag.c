#include <stdio.h>

int main(void){
	FILE *fp;
	fp = fopen("DELETEME.txt","r");
	if(fp != NULL){
		printf("Oops! DELETEME.txt is exist!\n");
		return 0;
	}else{
		printf("linuxctf{rm_is_dangerous_command!}\n");
	}
	return 0;
}
