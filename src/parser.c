#include <stdio.h>
#include "save.c"
#include "delete.c"

int parse(int function){
    FILE* fp;
    char line[255];

    char path[255];
    char projectName[255];

    fp = fopen(".vc" , "r");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        const char* val1 = strtok(line, " ");
        const char* val2 = strtok(NULL, " ");

        //Get the project name and the path from .vc file
        if (!strcmp(projectName, "")){
            strcpy(projectName, val2);
        }
        
        if (strcmp(path, "")){
            strcpy(path, val2);
        }

        
    }

    //Debug printf
    printf("PATH: %s\n", path);
    printf("PROJECT NAME: %s\n", projectName);

    if(function == 0){
        save(path, projectName);
    }
    else if(function == 1){
       delete(path, projectName);
    }


    return 0;
}