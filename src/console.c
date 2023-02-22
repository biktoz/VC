#include <stdio.h>

#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"


int console_log(char* message, char* COLOR, int exit_code){
    sprintf("%s %s %s", COLOR, message, RESET);
    return exit_code;
}

int main(){
    console_log("Hello World\n", YELLOW, 0);
}