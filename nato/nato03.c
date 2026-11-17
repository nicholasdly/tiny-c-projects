#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char is_nato(const char *word);

int main(void) {
    char text[64];

    printf("Type some text: ");
    fgets(text, 64, stdin);

    const char *match = strtok(text, " ,.!?:;\"'");
    while (match) {
        char ch = is_nato(match);
        if (ch != '\0') {
            putchar(ch);
        }

        match = strtok(NULL, " ,.!?:;\"'");
    }

    putchar('\n');
    return 0;
}

char is_nato(const char *word) {
    const char *nato[] = {
        "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
        "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
        "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
        "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
        "Yankee", "Zulu",
    };

    for (int i = 0; i < 26; i++) {
        const char *n = nato[i];
        const char *t = word;

        while (*n != '\0') {
            if ((*n | 0x20) != (*t | 0x20)) {
                break;
            }

            n++;
            t++;
        }

        if (*n == '\0') {
            return *nato[i];
        }
    }

    return '\0';
}
