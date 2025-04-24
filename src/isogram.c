#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>


char to_lower(char letter){
    if(letter >= 'A' && letter <= 'Z'){
        return letter + 'a' - 'A';
    }else if(letter >= 'a' && letter <= 'z'){
        return letter;
    }
    printf("No char\n");
}

bool is_isogram(const char phrase[]){

    uint8_t letter_occurences[26] = {0};
    uint8_t i=0;
    while(phrase[i] != '\0'){
        
        uint8_t current_char = to_lower(phrase[i])-'a';
        if (letter_occurences[current_char] != 1){
            letter_occurences[current_char] = 1;
            
            printf("current_char = %d\n",current_char);

        } else{
            printf("No\n");
            return false;
        }

        i++;
    }

    printf("True\n");
    return true;
}

// int main(int argc, char* argv[]){

//     for(uint8_t i=1; i<argc; i++){

//         printf("%s\n",argv[i]);

//         is_isogram(argv[i]);
//     }

//     return 0;
// }