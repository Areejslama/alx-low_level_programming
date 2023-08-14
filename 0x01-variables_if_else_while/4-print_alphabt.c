#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description: program that prints the alphabet
 *
 * Return :0 Always (success)
*/

int main() {
    char c;
    
    for (c = 'a'; c <= 'z'; c++) {
        putchar(c);
        
        // Start a new line after printing each 10 letters
        if ((c - 'a' + 1) % 10 == 0) {
            putchar('\n');
        }
    }
    
    return 0;
}

