#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 

int main(){ 
    int contador = 0; 
    int i;            
    char palabra[30]; 
    
    printf("palabra: "); 
    scanf("%s", palabra); 
    
    for (i = 0; i < strlen(palabra) - 1; i++){ 
        // Pasa las dos letras actuales a minúsculas directamente
        char c1 = tolower(palabra[i]);
        char c2 = tolower(palabra[i+1]);

        // Verifica si ambas letras juntas son vocales
        if ((c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u') && 
            (c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u')) { 
            contador = 1; 
            break; 
        } 
    } 
    
    if (contador == 1) printf("verdadero\n"); 
    else printf("falso\n"); 
        
    return EXIT_SUCCESS; 
}



