#include <stdio.h>
#include <sys/stat.h>

int main(void){
	struct stat st;
	if(stat("directory",&st)){
		printf("linuxctf{rmdir_is_only_delete_empty_directory}\n");
		return 0;
	}else{
		printf("Oops! You must delete directory named \"directory\"\n");
		return 0;
	}
}
