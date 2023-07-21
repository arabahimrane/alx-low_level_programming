#include "main.h"

/**
* _isupper - return tow value 1 if c is uppercase an 0 if otherwise
* @c: value to check.
* Description : checks for uppercase character.
*/

int _isupper(int c){
	if(c >= 'A' && c <= 'Z')
	  return(1);
	else
	  return(0); 
}
