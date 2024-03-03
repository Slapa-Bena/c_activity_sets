#include<stdio.h>

void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string:");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);
}

int stringcompare(char *string1, char *string2) { // its wrong
    while(*string1 != '\0' && *string2 != '\0') {
        if( *string1 != *string2) {
            return -1;
        } else if(*string1 > *string2) {
            return 1;
        }


        string1++;
        string2++;
    }

    if(*string1 == '\0' && *string2 != '0') {
        return -1;
    } else if (*string1 != '\0' && *string2 == '\0') {
        return 1;
    }

    return 0;
}
