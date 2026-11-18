#include <stdio.h>

int main(void) {
  int ch;

  while ((ch = getchar()) != EOF) {
    printf("%02X ", ch);
  }

  return 0;
}
