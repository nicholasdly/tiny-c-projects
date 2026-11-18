#include <stdio.h>
#include <ctype.h>

int main(void) {
  const int shift = 'D' - 'A';
  
  int ch;

  while ((ch = getchar()) != EOF) {
    if (isalpha(ch)) {
      ch += shift;
      if ((ch > 'Z' && ch < 'a') || (ch > 'z')) {
        ch -= 26;
      }
    }

    putchar(ch);
  }

  return 0;
}

