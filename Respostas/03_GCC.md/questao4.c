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
		return 0;
             }

}
