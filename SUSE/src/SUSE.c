/*
 ============================================================================
 Name        : SUSE.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <commons/temporal.h>
#include "biblioNOC/paquetes.h"

int main(void) {
	int i = 3333;
	while (i >= 3000) {
		char* tiempo = temporal_get_string_time();
		puts(tiempo); /* prints !!!Hello World!!! */
		printf("%d\n", i);
		free(tiempo);
		i--;
	}
	return prueba();
}
