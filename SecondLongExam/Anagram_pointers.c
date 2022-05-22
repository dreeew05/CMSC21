#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> /* toupper, isalpha */

//Function Declarations
void scan_word(int occurences[26]);
bool is_anagram(int occurences1[26], int occurences2[26]);

int main(void) {

    int o1[26] = {0}, o2[26] = {0};                  //Declare the arrays that will hold the letter occurence

    printf("Enter first word: ");
    scan_word(&o1);                                  //Calls scan_word(), pass the address of o1
    printf("Enter second word: ");
    scan_word(&o2);                                  //Calls scan_word(), pass the address of o2

    if (is_anagram(&o1, &o2)) {
        /*Checks if the two arrays have equal values,
        if they do, then the two words are anagrams.
        The arguments are the addresses of o1 and o2*/
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}

void scan_word(int occurences[26]){
    /* This function will receive the address of an array which will be
    the basis for the occurences of a letter in the word. Since the array's address was passed,
    changes made from here can be applied from the array.*/
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            *(occurences + (toupper(c) - 'A')) += 1;                //This line is the same with occurences[toupper(c) - 'A']++; The value of the element will add up everytime it exists on the word
        }
    }
}

bool is_anagram(int occurences1[26], int occurences2[26]){
    /*This function will check each value of the two arrays,
    if any index have different values, then it will return false.
    Otherwise, the loop will continue and if no difference is found,
    then it will return true.*/
    for(int i = 0; i < 26; i++){
        if(*(occurences1 + i) != *(occurences2 + i)){               //*(occurences1 + i) == occurences[i]; same logic applies to occurences2
            return false;
            break;
        }
    }
    return true;
}
