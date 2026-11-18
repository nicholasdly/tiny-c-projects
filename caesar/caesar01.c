#include <ctype.h>
#include <stdio.h>

int main(void) {
  int ch;

  while ((ch = getchar()) != EOF) {
    if (isalpha(ch)) {
      ch = toupper(ch) <= 'M'
        ? ch + 13
        : ch - 13;
    }
    putchar(ch);
  }

  return 0;
}

