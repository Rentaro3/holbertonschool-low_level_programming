#include <stdio.h> 
 
int main() { 
    int i, j; 
 
    for (i = 0; i <= 9; i++) { 
        for (j = 0; j <= 9; j++) { 
            if (i != j) { // check if digits are different 
                putchar(i + '0'); 
                putchar(j + '0'); 
                putchar(' '); 
            } 
        } 
    } 
 
    return 0; 
} 
