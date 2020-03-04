#include <stdio.h>
int main()
{
  int n, c, odp;
  printf("Podaj liczbe w dziesietnym:\n");
  scanf("%d", &n);
  printf("ktory bit bys chcial?: \n");
  scanf("%d", &c);
  odp = n >> (c - 1) & 1;
  printf("%d bit to %d", c, odp);
  return 0;
}
