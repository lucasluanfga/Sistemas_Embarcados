#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int   i;
       
             if( argc < 1 )
             {
                printf("Voce não passou argumento algum.\n");
             }
             else 
             {
                for(i = 1; i < (argc); i++)  
                   printf("Ola %s\n", argv[i]);
		
		printf("Numero de entradas = %d\n", (argc));
		return 0;
             }

}
