#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define MAX_USERNAME_LENGTH 100
#define KEY_LENGTH 10

void generate_key(char *username, char *key) {
    // This is where you'd implement the actual key generation algorithm
    // based on your analysis of the crackme5 binary
    // For now, we'll just generate a dummy key
    for (int i = 0; i < KEY_LENGTH; i++) {
        key[i] = username[i % strlen(username)] + i;
    }
    key[KEY_LENGTH] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    char username[MAX_USERNAME_LENGTH];
    char key[KEY_LENGTH + 1];

    strncpy(username, argv[1], MAX_USERNAME_LENGTH - 1);
    username[MAX_USERNAME_LENGTH - 1] = '\0';

    generate_key(username, key);

    printf("%s\n", key);

    return 0;
}
