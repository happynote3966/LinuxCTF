#include <stdio.h>

int main(void){
	FILE *fp;
	fp = fopen("RENAMEME.txt","r");
	if(fp != NULL){
		printf("Oops! RENAMEME.txt is still original!\n");
		return 0;
	}else{
		printf("linuxctf{Can_you_rename_me?}\n");
		return 0;
	}
}
