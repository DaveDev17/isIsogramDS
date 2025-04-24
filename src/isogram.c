#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // check of there is only one parameter
    if (argc != 2)
    {
        // output a message otherwise (usage: isogram <phrase>)
        printf("invalid input parameter! usage: isogram <phrase>\n");
        return EXIT_FAILURE;
    }
    // call is_isogramm and pass the argument
    // if result is true: print yes
    // if result is false: print no
    printf("%s\n", (is_isogram(argv[1]) == 0) ? "yes" : "no");
}


bool is_isogram(const char phrase[]){

    return true;
}
