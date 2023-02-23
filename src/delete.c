#include <stdio.h>



void delete(char* path, char* projectName){
    char cmd[1000];
    //"rm -r " + projectName + "/" + path + ".zip"

    //NOT WORKING!!!
    snprintf(cmd, 1000, "rm -r %s/%s.zip", projectName, path);

    printf(cmd);
    //system(cmd);

    console_log("Deleted!\n", RED);
}