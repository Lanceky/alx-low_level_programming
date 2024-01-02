#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random password
 * @length: Length of the password
 *
 * Return: Pointer to the generated password
 */
char *generate_password(int length)
{
    char *password = malloc((length + 1) * sizeof(char));
    if (password == NULL) {
        perror("Error allocating memory");
        exit(EXIT_FAILURE);
    }

    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_size = sizeof(charset) - 1;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < length; i++) {
        int index = rand() % charset_size;
        password[i] = charset[index];
    }

    password[length] = '\0';
    return password;
}

int main(void)
{
    int password_length = 12; // You can adjust the length as needed
    char *password = generate_password(password_length);

    printf("%s\n", password);

    free(password); // Remember to free the allocated memory

    return (0);
}

