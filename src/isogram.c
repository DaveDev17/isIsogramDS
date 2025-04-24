#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

#define UNITY_OUTPUT_COLOR

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
    printf("%s\n", (is_isogram(argv[1]) == 0) ? "no" : "yes");
}

char to_lower(char letter){
    if(letter >= 'A' && letter <= 'Z'){
        return letter + 'a' - 'A';
    } else if(letter >= 'a' && letter <= 'z'){
        return letter;
    }
    printf("No Letter\n");
}

bool is_isogram(const char phrase[]){
    uint8_t letter_occurences[26] = {0};
    uint8_t i = 0;
    while(phrase[i] != '\0'){
        uint8_t current_char = to_lower(phrase[i]) - 'a';
        if (letter_occurences[current_char] != 1){
            letter_occurences[current_char] = 1;
            printf("current_char = %d\n",current_char);
        } else{
            return false;
        }
        i++;
    }
    return true;
}