#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned) time(NULL));

  int ch;

  while ((ch = getchar()) != EOF) {
    if (rand() % 2 == 0) {
      putchar(tolower(ch));
    } else {
      putchar(toupper(ch));
    }
  }

  return 0;
}
