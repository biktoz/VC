#include <stdio.h>
#include <string.h>
#include "console.c"
#include "parser.c"
#include "notfound.c"


int main(int argc, char* argv[]){

    //In function parse() there are 3 possible value = 0 : save ; 1 : delete

    while (argv[1] != NULL){
        if (!strcmp(argv[1], "save")) {
            parse(0);
            return 0;
        }
        else if(!strcmp(argv[1], "delete")){
            parse(1);
            return 0;
        }
        else{
            notfound();
            return 1;
        }
    }
    notfound();
    return 0;
}