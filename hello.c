#include <stdio.h>

int main(void)
{
  char name[40];

  printf("yo. please enter your name:\n");
  fgets(name, 40, stdin);
  printf("hello, %s", name);
}