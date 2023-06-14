#include <stdio.h>
int findCharType(char c) {
    int type;
    int ascii = (int) c;
    if (ascii >= 65 && ascii <= 90) {
        type = 1;
    } else if (ascii >= 97 && ascii <= 122) {
        type = 2;
    } else if (ascii >= 48 && ascii <= 57) {
        type = 3;
    } else if (ascii >= 32 && ascii <= 126) {
        type = 4;
    } else {
        type = 5;
    }
    return type;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int result = findCharType(character);
    switch (result) {
        case 1:
            printf("Uppercase letter\n");
            break;
        case 2:
            printf("Lowercase letter\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }
    return 0;
}
