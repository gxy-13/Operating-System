#include<stdio.h>
#include<string.h>

const char VERSION[] = "1.0.0";


int main(int argc, char *argv[]) 
{

    if (argc <= 1) 
    {
        printf("Usage: %s [-n]\n", argv[0]);
        return 0;
    }

    if (strcmp(argv[1], "-n") == 0) {
        printf("Option -n is given\n");
    }else if (strcmp(argv[1], "-v") == 0) {
        printf("Version: %s\n", VERSION);
    }else if (strcmp(argv[1], "-p") == 0) {
        printf("Option -p is given\n");
    }
    
    return 0;
}