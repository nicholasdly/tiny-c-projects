#include <stdio.h>
#include <ctype.h>

int main(void) {
  const int shift = 'A' - 'D';
  
  int ch;

  while ((ch = getchar()) != EOF) {
    if (isalpha(ch)) {
      ch += shift;
      if ((ch > 'Z' && ch < 'a') || (ch < 'A')) {
        ch += 26;
      }
    }

    putchar(ch);
  }

  return 0;
}

