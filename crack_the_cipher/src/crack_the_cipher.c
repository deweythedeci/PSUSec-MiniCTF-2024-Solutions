#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFSIZE 100

char* encrypt(char* input) {
    for (int i = 0; input[i] != '\0'; i++) {
        input[i] = (input[i] << 5) + (input[i] >> 3) ^ 0x4d;
        input[i] = (unsigned int)(input[i]) % 94 + 33;
    }
    return input;
}

int main() {
    char input[BUFSIZE];

    // Loop to keep asking for user input
    while (1) {
        printf("Give me a string and I'll encrypt it for you.\nEnter your string: ");
        fgets(input, BUFSIZE, stdin);
        input[strcspn(input, "\n")] = '\0';

        printf("Here you go! Encrypted: %s\n\n", encrypt(input));
    }

    return 0;
}