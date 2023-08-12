#include<stdio.h>
/**
 * main-this is entry point
 *
 * Description: program that prints the alphabet
 *
 * Return:0 Always (success)
*/
int main (void)
{

  // set both the starting and ending alphabet
  char start = 'a';
  char end = 'z' ;

  // initialize ch with the starting alphabet as a
  char ch = start;

  // print out characters from the initial value of ch til before z
  while(ch != end)
  {
     putchar(ch);
     ch++;
  }
  putchar("\n")
  return 0;
}
