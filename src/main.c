#include <stdio.h>
#include <string.h>
#include "parser.c"


int main(int argc, char* argv[]){

    //In function parse() there are 3 possible value = 0 : save ; 1 : override ; 2 : delete.

    while (argv[1] != NULL){
        if (!strcmp(argv[1], "save")) {
            parse(0);
            //save();
            return 0;
        }
        else if(!strcmp(argv[1], "override")){
           //console_log("Overrided!\n", YELLOW);
           return 0;
        }
        else if(!strcmp(argv[1], "delete")){
            //console_log("Deleted!\n", RED);
            return 0;
        }
        else{
            //console_log("Command not found!\n", RED);
            return 1;
        }
    }
    //console_log("Command not found!\n", RED);
    return 0;
}