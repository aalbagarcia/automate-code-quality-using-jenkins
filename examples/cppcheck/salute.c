#include "salute.h"
#include <string.h>
#include <stdlib.h>

char* informal_salute(char *name) {
	char *salute = "Hello, ";
	char *end_salute = "!";
	char *destination = (char *)malloc((strlen(salute) + strlen(name) + strlen(end_salute))*sizeof(char));
	for (int i = 0; i < strlen(destination); i++) {
		destination[i]=' ';
	}
	strcat(destination, salute);
	strcat(destination, name);
	strcat(destination, end_salute);		
        return destination;
}

char* formal_salute(char *name, char *title) {
	char *salute = "Hello, ";
	char *end_salute = ", have a wonderful day.";
	char *destination = (char *)malloc((strlen(salute) + 
					strlen(name) + 
					strlen(title) + 
					strlen(end_salute))*sizeof(char));

	for (int i = 0; i < strlen(destination); i++) {
		destination[i]=' ';
	}
	strcat(destination, salute);
	strcat(destination, title);
	strcat(destination, name);
	strcat(destination, end_salute);		
        return destination;
}
