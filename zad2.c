#include <stdio.h>
int main()
{
  int n, c;
  char k;
  printf("Jaka liczbe chcesz przesunac?: \n");
  scanf("%d", &n);
  printf("O ile pozycji? \n");
  scanf("%d", &c);
  printf("w (l)ewo czy (p)rawo \n");
  k = getch();
  switch(k)
  {
    case 'l':
    	printf("%d", n<<c);
    	break;
  	case 'p':
  		printf("%d", n>>c);
  		break;
  	default:
  		printf("to nie l ani p");
  }
  return 0;
}
