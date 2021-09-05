build: objects
	gcc main.o salute.o -o build/salute -lm 
main.o : main.c
	gcc -c main.c
salute.o : salute.c
	gcc -c salute.c	
objects : main.o salute.o
