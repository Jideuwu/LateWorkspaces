#include <stdio.h>
#include <string.h>

int main() {
   char str1[50], str2[50], resultado[100];

    // Pedir al usuario la primera cadena
    printf("Ingrese la primera cadena: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Eliminar el salto de línea si lo hay
    // Pedir al usuario la segunda cadena
    printf("Ingrese la segunda cadena: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Eliminar el salto de línea si lo hay

    // Concatenar las cadenas
    strcpy(resultado, str1); // Copiar la primera cadena
    strcat(resultado, " ");  // Añadir un espacio entre las cadenas
    strcat(resultado, str2); // Concatenar la segunda cadena

    // Mostrar el resultado
    printf("El mensaje concatenado es: %s\n", resultado);

    return 0;
}
