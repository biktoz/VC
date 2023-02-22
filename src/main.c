#include <stdio.h>
#include <string.h>
#include "console.c"



void main(int argc, char* argv[]){
    while (argv[1] != NULL){
        if (!strcmp(argv[1], "save")) {
            console_log("Saved!\n", GREEN, 0);
        }
        else if(!strcmp(argv[1], "override")){
           console_log("Saved!\n", GREEN, 0); 
        }
        else if(!strcmp(argv[1], "delete")){
            console_log("Saved!\n", GREEN, 0);
            
        }
        else{
            console_log("Saved!\n", GREEN, 0);
        }
    }
    console_log("Saved!\n", GREEN, 0);
}