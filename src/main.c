#include <stdio.h>

int add(int a, int b);

int main(int argc, char const *argv[])
{
  int c = add(2, 3);
  printf("the result is: %d\n", c);

  return 0;
}
