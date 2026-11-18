#include <ctype.h>
#include <stdio.h>

int main(void) {
  int ch;

  while ((ch = getchar()) != EOF) {
    if (!isupper(ch)) {
      putchar(toupper(ch));
    } else {
      putchar(ch);
    }
  }

  return 0;
}
