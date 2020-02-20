#include <stdio.h>

#include "linked.h"

int main(int argc, char *argv[])
{
  plinked l, r;

  l = readlinked();
  printlinked(l);
  /*putchar('\n');
  r=reverselinked(l);
    printlinked(r);*/
  return 0;
}
