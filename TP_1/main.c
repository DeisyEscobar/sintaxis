
#include <stdio.h>
#include "scanner.h"

int main( void )
{
   
   //DECLARO VECTOR
   char buffer[200];
   char ch;
   int token;
   int i =  0 ;
  
    while ((token = get_token(buffer)) != FDT ) {


	 switch (token) {
		case SEP : 
			printf(" Separador : %s \n ",buffer);
		break;
		case CAD : 
			printf(" Cadena :%s \n ",buffer);
	    break;
	                }
	   
   }

printf(" Fin de texto  \n " );

  return 0;
}
