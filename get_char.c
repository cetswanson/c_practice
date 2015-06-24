#include <stdio.h>

main()
{
  int c;
  int test;

  test = ((getchar()) != EOF);

  while ((c == getchar()) != EOF) {
    putchar(c);
    printf("%d", test);
  }
}