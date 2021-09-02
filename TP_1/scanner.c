
#include <ctype.h>
#include "scanner.h"
#include <stdio.h>
#include <string.h>
//la funcion  debe recibir una cadena  

int  get_token (char* cadena)
{
	int token ;
	char ch ;
	int i ;
	i = 0 ; 
	token  =  9 ;
	
    while ((ch = getchar()) != EOF ) {
    	
    while ((isspace(ch) ) == 0 && ch != ','){
    	cadena[i] = ch;        
    	i++;
        ch = getchar();
		
    	}	
    	
    	if (strlen(cadena) > 0 && i > 0 ){
    		cadena[i] = '\0';
    		ungetc(ch,stdin);//para que vuelva ser leido nuevamente
    		return CAD ;
		}
	
		if (ch == ',' )
		{
			i= 0;
			cadena[i] = ',';
			cadena[i+1] = '\0';
		    return SEP;
		}  
		    	   
}
  	
	return FDT;
}

