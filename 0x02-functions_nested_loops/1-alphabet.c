#include<stdio.h>
#include "main.h"
/**
 * main-this is entry point
 *
 * Description: function that prints the alphabet
 *
 * Return:0 Always (success)
*/
void print_alphabet(void)
{
        char ch = 'a';
        /*prints a - z*/
        while (ch <= 'z')
        {
        putchar(ch);
        ch++;
        }
        putchar ('\n');
