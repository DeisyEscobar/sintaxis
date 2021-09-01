
#include <ctype.h>
#include "scanner.h"
#include <stdio.h>
//la funcion  debe recibir una cadena  

int  get_token (char* cadena)
{
	int token ;
	
	if (cadena[0]== ','){
		token = SEP ;
	}
	
		if (cadena[0]== '\0'){
		token = FDT ;
	}
	
		if (cadena[0]!= '\0' && cadena[0]!= ','  ){
		token = CAD ;
	}  
	
	
	 switch (token) {

		case SEP : 
			printf(" Separador : %s \n ",cadena);
		break;
		case  FDT :
			printf(" Fin de texto  \n " );
		break;
		case CAD : 
			printf(" Cadena :%s \n ",cadena);
	    break;
	}
	
	return 0;
}

