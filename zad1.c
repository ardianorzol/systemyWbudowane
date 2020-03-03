#include <stdio.h>
int main()
{
  int n, c;

  printf("Podaj liczbe w dziesietnym:\n");
  scanf("%d", &n);

  printf("%d W binarnym to:\n", n);

  for (c = 31; c >= 0; c--)
  {
    if (n >> c & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
