#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

typedef struct {
    char *dictionary;
    char *length;
    char *start;
}CommandLine

#define LEN "--len"
#define START "--start"
#define DICTIONARY "--dictionary"

CommandLine return_arg(int argc, char **argv){
    CommandLine CommandArgument;
    for (int i = 0; i < argc ; i++){
	if (strcmp(argv[i], LEN) == 0){
	    CommandArgument.length == argv[i+1];
	} else if (strcmp(argv[i],START) == 0){
	    CommandArgument.start == argv[i+1];
	} else if (strcmp(argv[i],DICTIONARY) == 0){
	    CommandArgument.dictionary == argv[i+1];
	}
    }
	return CommandArgument;
}

bool check_command(int argc, char** argv){
     for (int i = 0 ; i < argc ; i++){
	 if (strcmp(argv[i],LEN) == 0){
	     if (i + 1 < argc && argv[i+1] != NULL){
		 if (atoi(argv[i+1]) == 3 || atoi(argv[i+1]) == 4){
			 return true;
		 } 
	     }
	 } else if (strcmp(argv[i],START) == 0){
	     if (1 + i < argc && argv[i + 1] != NULL){
		 if (strlen(argv[i + 1]) == 3 || strlen(argv[i + 1]) == 4){
		     for (int j = 0 ; j < argv[i][j] != '\0' ; j++){
			 if (isalpha(argv[i][j]) == 0){
			     return true;
			 }
		     }
		 }
	     }
	 } else if (strcmp(argv[i],DICTIONARY) == 0){
	     if ( 1 + i < argc && argv[i + 1] != NULL){
		 return true;
	     }
	 }
     }
     return false;
}

int main (int argc, char** argv){

    check_command(argc,argv);
    CommandLine a = return_arg(argc, argv);
    printf("Welcome to UQ wordiply \n");



			 


