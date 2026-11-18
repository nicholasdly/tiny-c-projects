#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Please provide start character argument\n");
    exit(1);
  }

  if (argc < 3) {
    fprintf(stderr, "Please provide end character argument\n");
    exit(1);
  }

  int a = argv[1][0];
  int b = argv[2][0];

  if (!isalpha(a)) {
    fprintf(stderr, "The start character '%c' is not that of the alphabet\n", a);
    exit(1);
  }

  if (!isalpha(b)) {
    fprintf(stderr, "The end character '%c' is not that of the alphabet\n", b);
    exit(1);
  }

  int shift = b - a;

  int ch;
  while ((ch = getchar()) != EOF) {
    if (isupper(ch)) {
      ch += shift;
      if (ch > 'Z') ch -= 26;
      if (ch < 'A') ch += 26;
    } else if (islower(ch)) {
      ch += shift;
      if (ch > 'z') ch -= 26;
      if (ch < 'a') ch += 26;
    }
    putchar(ch);
  }

  return 0;
}

