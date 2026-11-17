#include <_stdio.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[64];

    printf("Type some text: ");
    fgets(text, 64, stdin);

    char *match = strtok(text, " ,.!?:;\"'");
    while (match) {
        printf("%s\n", match);
        match = strtok(NULL, " ,.!?:;\"'");
    }

    return 0;
}
