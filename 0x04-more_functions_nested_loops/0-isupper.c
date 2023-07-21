#include "main.h"
/**
 * _isupper - return tow value 1 if c is uppercase an 0 if otherwise
 * @c: value to check.
*/
int _isupper(int c){
  if(c >= 'a' && c <= 'z')
        return(0);
  else
    return(1); 
}
