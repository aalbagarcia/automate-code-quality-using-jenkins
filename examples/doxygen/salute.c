/**
 * \file
 *
 * Módulo de saludos
 *
 * Contiene funciones para construir saludos a los usuarios.
 */
#include "salute.h"
#include <string.h>
#include <stdlib.h>

/**
 * Devuelve un saludo informal
 * 
 * @param[in]  name Nombre del usuario a saludar
 * @return     Saludo informal al usuario
 */
char* informal_salute(char *name) {
	char *salute = "Hello, ";
	char *end_salute = "!";
	char *destination = malloc(strlen(salute) + strlen(name) + strlen(end_salute));

	strcat(destination, salute);
	strcat(destination, name);
	strcat(destination, end_salute);		
        return destination;
}

/**
 * Devuelve un saludo formal
 * 
 * @param[in]  name Nombre del usuario a saludar
 * @param[in]  title Título con el que referirnos al usuario, por ejemplo Mr., Sr., Srta., etc.
 * @return     Saludo formal al usuario
 */
char* formal_salute(char *name, char *title) {
	char *salute = "Hello, ";
	char *end_salute = ", have a wonderful day.";
	char *destination = malloc(strlen(salute) + 
					strlen(name) + 
					strlen(title) + 
					strlen(end_salute));

	strcat(destination, salute);
	strcat(destination, title);
	strcat(destination, name);
	strcat(destination, end_salute);		
        return destination;
}
