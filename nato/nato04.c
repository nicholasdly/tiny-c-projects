#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BSIZE 256

char is_nato(const char *word);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Please supply a text file argument\n");
        exit(1);
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "Unable to open file %s\n", argv[1]);
        exit(1);
    }

    char buffer[BSIZE];
    while (fgets(buffer, BSIZE, fp) != NULL) {
        const char *match = strtok(buffer, " ,.!?=()[]{}'\"");

        while(match) {
            char ch = is_nato(match);
            if (ch != '\0') {
                putchar(ch);
            }

            match = strtok(NULL, " ,.!?=()[]{}'\"");
        }
    }

    putchar('\n');

    fclose(fp);
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
