
#include <stdlib.h>
#include <stdio.h>

main(int argc, char **argv)
{
	printf("argumentos:");
int i=1;
for ( i; i<argc; i++){
	printf(" %s",argv[i]);
}
printf("\n");
return 0;
}
