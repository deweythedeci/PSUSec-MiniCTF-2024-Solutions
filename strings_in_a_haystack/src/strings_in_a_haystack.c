#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

#pragma section(".mydata", read);

const char secret[] = "flag{plaintext_is_bad}";

int main() {
    char buf[BUF_SIZE];

    printf("Enter the flag: ");
    fgets(buf, BUF_SIZE, stdin);

    buf[strcspn(buf, "\n")] = 0;
    
    if (strcmp(buf, secret) == 0) {
        printf("You got it.\n");
    } else {
        printf("That's not right.\n");
    }

    printf("Press Enter to exit.");
    getchar();

    return 0;
}