#include <stdio.h>
int main()
{
  int n, c;
  printf("Podaj liczbe w dziesietnym:\n");
  scanf("%d", &n);
  printf("ktory bit bys chcial?: \n");
  scanf("%d", &c);
    if (n >> (c - 1) & 1)
      printf("%d bit to 1", c);
    else
      printf("%d bit to 0", c);
  return 0;
}
