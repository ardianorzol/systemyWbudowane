#include<stdio.h>
int main()
{
	
	int n=50;
	int i;
	int liczba = 0b1011011;
	int maska = 0b11111;
	int ziarno = liczba & maska;
	int pom = 0b000001;
	int pom2;
	
	for(i=0; i<n; i++)
	{
		pom2=(pom >> (1 - 1) & 1)^(pom >> (2 - 1) & 1)^(pom >> (4 - 1) & 1)^(pom >> (5 - 1) & 1);
		pom = pom>>1;
		if(pom2 == 1)
			pom += 32;
		printf("%d\n", pom);
	}
	return 0;
}
