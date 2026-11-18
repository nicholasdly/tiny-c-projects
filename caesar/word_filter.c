#include <stdio.h>
#include <ctype.h>

#define WORDSIZE 64

int main(void) {
  char word[WORDSIZE];

  int ch = 0;
  int offset = 0;

  while ((ch = getchar()) != EOF) {
    if (isspace(ch) && offset == 0) continue;
    if (isspace(ch)) {
      word[offset] = '\0';
      offset = 0;
      printf("%s\n", word);
    } else {
      word[offset] = ch;
      offset++;
    }

    if (offset == WORDSIZE - 1) {
      word[offset] = '\0';
      offset = 0;
      printf("%s", word);
    }
  }

  return 0;
}

