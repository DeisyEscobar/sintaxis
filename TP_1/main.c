
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "scanner.h"

int main( void )
{
   
   //DECLARO VECTOR
   char buf[100];
   char ch;
   int token;
   int i =  0 ;
  
    while ((ch = getchar()) != EOF ) {
    	
		while ((isspace(ch) )==0 && ch != ','){
    		buf[i] = ch;    
    		i++;
    		ch = getchar();
    		
    	}
		
		if (i>0 && strlen(buf)>0 )
		{
		buf[i]= '\0';
		token = get_token(buf);
		}
		
		if (ch == ',')
		{
			i=0;
		    buf[i] = ch;
		    buf[i+1]= '\0';
		    token = get_token(buf);
		}      
	i= 0;
	   
  }
  

if (ch == EOF){

	buf[0]= '\0';
	token =  get_token(buf) ;  

}
  return 0;
}
