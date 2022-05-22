#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> /* toupper, isalpha */

int o1[26], o2[26];                                             //Declare global variable for occurence1 and occurence2

//Function Declarations
void scan_word(int occurences[26], int condition);              
bool is_anagram(int occurences1[26], int occurences2[26]);

int main(void) {
    int letters[26] = {0};                                      //Set the values of the array to 0

    printf("Enter first word: ");
    scan_word(letters, 1);                                  //Calls scan_word(), 1 means that it is the first word
    printf("Enter second word: ");
    scan_word(letters, 2);                                  //Calls scan_word(), 2 means that it is the second word
    
    if (is_anagram(o1, o2)) {
        /*Checks if the two arrays have equal values,
        if they do, then the two words are anagrams*/
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}

void scan_word(int occurences[26], int condition){
    /* This function will receive an empty array which will be 
    the basis for the occurences of a letter in the word, and a condition
    if it is the first or second word.*/
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            if(condition == 1) o1[toupper(c) - 'A']++;                  //Check if it is the first word, then the final occurence of the word will be saved to the array named o1
            else o2[toupper(c) - 'A']++;                                //Same logic with the line above, the only difference is that it will be saved to the array named o2 
        }
    }
}

bool is_anagram(int occurences1[26], int occurences2[26]){
    /*This function will check each value of the two arrays, 
    if any index have different values, then it will return false.
    Otherwise, the loop will continue and if no difference is found, 
    then it will return true.*/
    for(int i = 0; i < 26; i++){
        if(occurences1[i] != occurences2[i]){
            return false;
            break;
        }
    }
    return true;
}
