#include <stdio.h>

int main(){
	
	int lenguaje1[45], lenguaje2[45], lenguajeUnion[100], interseccion[100];
    int n1, n2, i, j, k;
	    
	    printf("Union");
	    printf("\nIngrese el numero de elementos del lenguaje 1: ");    // Pedimos al usuario que ingrese el tamaño de cada conjunto
        scanf("%d", &n1);

        printf("Ingrese los elementos del lenguaje 1:");
        for (i = 0; i < n1; i++) {
          scanf("%d", &lenguaje1[i]);
        }

        printf("Ingrese el numero de elementos del lenguaje 2:");
        scanf("%d", &n2);

        printf("Ingrese los elementos del lenguaje 2: \n");
        for (i = 0; i < n2; i++) {
          scanf("%d", &lenguaje2[i]);
        }
        for (i = 0; i < 20; i++) {         // Inicializamos el conjunto unión a cero
          lenguajeUnion[i] = 0;
        }
        for (i = 0; i < n1; i++) {         // Copiamos los elementos del conjunto 1 al conjunto unión
               lenguajeUnion[i] = lenguaje1[i];
        }

        // Agregamos los elementos del conjunto 2 al conjunto unión
        k = n1; // Índice para el conjunto unión
        for (i = 0; i < n2; i++) {
           for (j = 0; j < n1; j++) {          // Verificamos si el elemento ya está en el conjunto unión
              if (lenguaje2[i] == lenguaje1[j]) {
                break;
              }
           }
        
        if (j == n1) {          // Si no se encontró un duplicado, agregamos el elemento al conjunto unión
           lenguajeUnion[k] = lenguaje2[i];
           k++;
        }
        }

        printf("La union de los dos Lenguajes es: ");      // Muestra el conjunto unión
            for (i = 0; i < k; i++) {
              printf("%d", lenguajeUnion[i]);
            }
		
		printf("\nInterseccion");
        printf("\nIngrese el numero de elementos del lenguaje 1: ");      // Pedimos al usuario que ingrese el tamaño de cada conjunto
        scanf("%d", &n1);

        printf("Ingrese los elementos del lenguaje 1:\n");
        for (i = 0; i < n1; i++) {
           scanf("%d", &lenguaje1[i]);
        }

        printf("Ingrese el numero de elementos del lnguaje 2: ");
        scanf("%d", &n2);

        printf("Ingrese los elementos del lenguaje 2:\n");
        for (i = 0; i < n2; i++) {
          scanf("%d", &lenguaje2[i]);
        }
        for (i = 0; i < 10; i++) {     // Inicializamos el conjunto intersección a cero
        interseccion[i] = 0;
        }
        k=0;
        for (i = 0; i < n1; i++) {       // Encontramos los elementos comunes y los agregamos al conjunto intersección
           for (j = 0; j < n2; j++) {
              if (lenguaje1[i] == lenguaje2[j]) {
                interseccion[k] = lenguaje1[i];
                k++;
               
              }
           }
         }
        printf("La intersección de los dos lenguajes es: ");        // Imprimimos la intersección
        for (i = 0; i < k; i++) {
         printf("%d ", interseccion[i]);
        }
		  
		return 0;
}
