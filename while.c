#include <stdio.h>

int main()
{
  int i = 0;
  while (i < 10)
  {
    if (i == 4)
    { // skip 4
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  }
  return 0;
}
