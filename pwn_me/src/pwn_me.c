#include <stdio.h>
#include <cstring>
#include "obfuscate.h"

void print_flag() {
    char flag[] = AY_OBFUSCATE("flag{ive_been_pwned}");
    printf("The flag is \"%s\"\n", flag);
}

int main() {
    char a[8] = "notAdmin";
    char b[20];

    printf("Welcome! Your status is curently \"%s\".\n", a);
    printf("If you want the flag it will have to be \"isAdmin\".\n\n");

    printf("In the mean time, enter some text and I'll store it for you.\n");
    printf("Please keep it short (I don't have a lot of room!): ");
    gets(b);

    printf("\nChecking status... It is currently \"%s\".\n", a);

    if (strcmp(a, "isAdmin") == 0) {
        printf("Access granted.\n");
        print_flag();
    } else {
        printf("Access denied.\n");
    }
    
    printf("\nPress Enter to exit.\n");
    getchar();

    return 0;
}
