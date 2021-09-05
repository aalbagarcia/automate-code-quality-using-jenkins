/**
 * \file
 *
 *  Programa que comprueba si un número es un número de Armstrong.
 */
# include <stdio.h>
# include "salute.h"

/**
 * La función principal del programa
 * 
 */
int main(){   
	char *name= "Luis";
	char *title = "Mr.";
	printf("%s %s:\n", title, name);   
	printf("\t%s\n", informal_salute(name));   
	printf("\t%s\n", formal_salute(name, title));   
        return 0;
}

