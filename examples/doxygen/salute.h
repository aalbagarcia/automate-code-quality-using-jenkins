/**
 * @file
 *
 * Módulo para gestionar los saludos
 */

#ifndef SALUTE_H
#define SALUTE_H

/**
 * Devuelve un saludo con un tono informal
 */ 
char* informal_salute(char *name);

/**
 * Devuelve un saludo con un tono formal
 */ 
char* formal_salute(char *name, char *title);

#endif /* SALUTE_H */
