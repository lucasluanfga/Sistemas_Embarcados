#include <stdio.h>
#include <stdlib.h>

int main()
{

	char string[100];

	printf("Digite seu nome: ");
	gets(string);
	printf("Ola %s\n", string);

	return 0;

}
