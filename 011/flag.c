#include <stdio.h>
#include <sys/stat.h>

int main(void){
	struct stat st;
	if(stat("directory",&st)){
		printf("You must create directory\n");
		return 0;
	}else{
		printf("linuxctf{mkdir_is_basic_command}\n");
		return 0;
	}
}
