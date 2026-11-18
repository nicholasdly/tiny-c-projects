#include <ctype.h>
#include <stdio.h>

int main(void) {
  const char *nato[] = {
    "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
    "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
    "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
    "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
    "Yankee", "Zulu",
  };

  char ch;

  while ((ch = getchar()) != EOF) {
    if (ch == '\n') putchar(ch);
    if (isalpha(ch)) {
      printf("%s ", nato[toupper(ch) - 'A']);
    }
  }

  return 0;
}

