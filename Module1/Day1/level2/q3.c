#include <stdio.h>

int isVowel(char c) {
    int isVowel;
    switch (c) {
        case 'a':
            isVowel = 1;
            break;
        case 'e':
            isVowel = 1;
            break;
        case 'i':
            isVowel = 1;
            break;
        case 'o':
            isVowel = 1;
            break;
        case 'u':
            isVowel = 1;
            break;
        case 'A':
            isVowel = 1;
            break;
        case 'E':
            isVowel = 1;
            break;
        case 'I':
            isVowel = 1;
            break;
        case 'O':
            isVowel = 1;
            break;
        case 'U':
            isVowel = 1;
            break;
        default:
            isVowel = 0;
            break;
    }
    return isVowel;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    int result = isVowel(character);
    if (result == 1) {
        printf("entered character is a vowel\n");
    } else {
        printf("entered character is not vowel\n");
    }
    return 0;
}