#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 

int main() { 
    int total_pares = 0; 
    int i;            
    char frase[100]; 
    printf("Ingrese la frase: "); 
    fgets(frase, sizeof(frase), stdin); 
    frase[strcspn(frase, "\n")] = '\0';
    printf("\n--- Buscando vocales juntas ---\n");
    for (i = 0; i < strlen(frase) - 1; i++) { 
        char c1 = tolower(frase[i]);
        char c2 = tolower(frase[i+1]);
        if ((c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u') && 
            (c2=='a' || c2=='e' || c2=='i' || c2=='o' || c2=='u')) { 
            
            total_pares++; 
            printf("Par %d encontrado: '%c%c' en la posicion %d\n", total_pares, frase[i], frase[i+1], i + 1);
        } 
    } 

    if (total_pares > 0) {
        printf("\nResultado: verdadero (Se encontraron %d pares en total)\n", total_pares);
    } else {
        printf("\nResultado: falso (No hay vocales juntas)\n"); 
    }
        
    return EXIT_SUCCESS; 
}




