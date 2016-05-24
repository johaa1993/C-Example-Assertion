#include <stdio.h>
/*
#define NDEBUG
Disables assert. Needs to be before assert.h.
Alternative invoke "-D NDEBUG" when compiling with gcc.
*/
#include <assert.h>

int length2 (int * a, int count)
{
  int result = 0;
  /* Precondition */
  assert (a != NULL);
  assert (count >= 0);
  for (int i = 0; i < count; i++)
  {
    result = result + (a [i] * a [i]);
  }
  /* Postcondition */
  assert (result >= 0);
  return result;
}

#define COUNT 3

int main (void)
{
  int a [COUNT] = {1, 2, 3};
  int * b = NULL;
  int r;
  r = length2 (a, COUNT);
  printf ("r = %i\n", r);
  r = length2 (b, COUNT);
  printf ("r = %i\n", r);
  return 0;
}
