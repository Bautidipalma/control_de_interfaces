#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
	// Inicializo el USB
    stdio_init_all();
	// Demora para esperar la conexion
	sleep_ms(1000);
	// Cuanto ocupa cada tipo de dato
	printf("Un char ocupa %d byte\n", sizeof(char));
	printf("Un short ocupa %d bytes\n", sizeof(short));
	printf("Un int ocupa %d bytes\n", sizeof(int));
	printf("Un long int ocupa %d bytes\n", sizeof(long int));
	printf("Un float ocupa %d bytes\n", sizeof(float));
	printf("Un double ocupa %d bytes\n", sizeof(double));

    while (true) {
	int16_t num1;  
	int16_t num2;  
	printf("ingrese un numero: ");
	scanf("%hd", &num1);
	fflush(stdin);
	printf("ingrese otro numero: ");
	scanf("%hd", &num2);
	printf("el resultado es igual a %hd ", num1 + num2);
    }
    return 0;
}
