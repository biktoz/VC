#include <stdio.h>
#include "lib/colors.h"


void console_log(char* message, char* COLOR){
    printf("%s %s %s", COLOR, message, RESET);
}