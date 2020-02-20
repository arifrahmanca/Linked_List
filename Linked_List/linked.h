typedef struct linkedstruct *plinked;

struct linkedstruct
{
  char c;
  plinked next;
};

extern plinked newlinked(void);
extern void    freelinked(plinked l);
extern plinked reverselinked(plinked l);
extern void    printlinked(plinked l);
extern plinked readlinked(void);
