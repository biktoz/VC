#include <stdio.h>
#include "console.c"

void save(char* path, char* projectName){
    

    char cmd[1000];
    strcpy(cmd, "zip -r ");
    strcat(cmd, path);
    strcat(cmd, ".zip .");
    system(cmd);

    char cmd2[1000];
    strcpy(cmd2, "mv ");
    strcat(cmd2, path);
    strcat(cmd2, ".zip");
    strcat(cmd2, " ");
    strcat(cmd2, projectName);

    system(cmd2);

    console_log("Saved!\n", GREEN);
}