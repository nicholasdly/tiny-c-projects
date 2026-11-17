#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define BSIZE 256

int main(void) {
    const char filename[] = "nato/lorem.txt";
    const char *nato[] = {
        "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
        "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
        "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
        "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
        "Yankee", "Zulu",
    };

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "Unable to open file %s\n", filename);
        exit(1);
    }


    char buffer[BSIZE];
    while (fgets(buffer, BSIZE, fp) != NULL) {
        int i = 0;

        while (buffer[i]) {
            int character = toupper((unsigned char) buffer[i]);
            if (isalpha(character)) {
                printf("%s ", nato[character - 'A']);
            }

            i++;
        }

        putchar('\n');
    }

    fclose(fp);
    return 0;
}
