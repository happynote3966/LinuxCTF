#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int line,word;
	line = atoi(argv[1]);
	word = atoi(argv[2]);

	if(line == 61454 && word == 553077){
		printf("linuxctf{wc_is_counting_the_number_of_word_or_line}\n");
	}else{
		printf("NO! Incorrect numbers!\n");
	}

	return 0;
}
