#include <stdio.h>

int main(void) {
  int column = 0;

  int ch;
  while ((ch = getchar()) != EOF) {
    printf("%02X ", ch);
    column += 3;
    
    if (column >= 80) {
      putchar('\n');
      column = 0;
    } else if (ch == '\n') {
      putchar('\n');
    }
  }

  return 0;
}

