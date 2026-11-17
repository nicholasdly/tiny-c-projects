#include <ctype.h>
#include <stdio.h>

#define BSIZE 64

int main() {
    const char *nato[] = {
        "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
        "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
        "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
        "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
        "Yankee", "Zulu",
    };

    char buffer[BSIZE];
    fgets(buffer, sizeof(buffer), stdin);

    int i = 0;
    while (buffer[i]) {
        char character = toupper(buffer[i]);
        if (isalpha(character)) {
            printf("%s ", nato[character - 'A']);
        }

        i++;
        if (i == BSIZE) {
            break;
        }
    }

    putchar('\n');
    return 0;
}
