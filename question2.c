#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);
    char reversed_str[1000];

    for (int i = 0; i < length; i++) {
        reversed_str[i] = str[length - 1 - i];
    }
    reversed_str[length] = '\0'; // Add null terminator at the end

    printf("Reversed string: %s\n", reversed_str);

    return 0;
}
