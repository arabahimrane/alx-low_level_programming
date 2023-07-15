#include <stdio.h>
/**
 * main -Entry point of the program
 * Prints the numbers from 0-9.
 * 
 * Return: 0 on success
 */
int main(void)
{
  for(int i=0 ; i<10; i++){
    putchar(i);
  }
  putchar('\n');
}
