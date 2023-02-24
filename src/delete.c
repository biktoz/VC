#include <stdio.h>



void delete(char* path, char* projectName){
    
    //"rm -r " + projectName + "/" + path + ".zip"
    projectName[strcspn(projectName, "\r\n")] = 0; 
    
    char cmd[1000];
    strcpy(cmd, "rm -d ");
    strcat(cmd, projectName);
    strcat(cmd, "/");
    strcat(cmd, path);
    strcat(cmd, ".zip");
    system(cmd);

    console_log("Deleted!\n", RED);
}