#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_Palindrome(char string[10]){

    //getting the length of the array and finding the middle of it
    int len = strlen(string);
    int middle = len / 2;

    //comparing each character first with last etc....
    for(int i = 0; i < middle; i++) {
        if(string[i] != string[len - i- 1]) {
            // if there is one different character it will return false (not a palindrome)
            return false;
        }

        // else it's a palindrome
        return true;
    }
}

int main() {

    char word[10];
    printf("enter a word: \n");
    scanf("%s", &word);

    if(is_Palindrome(word)) {
        printf("\n %s is a palindrome", word);
    } else {
        printf("\n %s is not a palindrome", word);
    }
    return 0;
}