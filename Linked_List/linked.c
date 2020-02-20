#include <stdlib.h>
#include <stdio.h>

#include "linked.h"

plinked newlinked(void)
{
  plinked l;

  l = (plinked)malloc(sizeof(struct linkedstruct));
  if (l==NULL)
    {
      fprintf(stderr,"newlinked: Could not allocate cell\n");
      exit(1);
    }
  return l;
}

void freelinked(plinked l)
{
  free((void*)l);
}

plinked reverselinked(plinked l)
{
  plinked r, tmp;

  r=NULL;
  while (l!=NULL)
    {
      tmp=l->next;
      l->next=r;
      r=l;
      l=tmp;
    }
  return r;
}

void printlinked(plinked l)
{
  while (l!=NULL)
    {
      putchar(l->c);
      l=l->next;
    }
}

plinked readlinked(void)
{
  plinked l, prev;
  int c;

  prev = NULL;
  while ( (c=getchar())!=EOF )
    {
      l=newlinked();
      l->c    = c;
      l->next = prev;
      prev=l;
    }
  return prev;
}
