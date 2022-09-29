#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    
    char dato[30];
    const float PI = 3.14;
    float number;

    printf("Specifica se raggio, perimetro o area: ");
    scanf("%s", dato);


    for (int i = 0; dato[i]; i++) {
        dato[i] = tolower(dato[i]);
    }


    if (!strcmp(dato, "raggio") == 0 && !strcmp(dato, "perimetro") == 0 && !strcmp(dato, "area") == 0) {
    
        printf("Uhm... qualcosa non quadra\n\nPremi un tasto per uscire dal programma\t");
        
        system("Pause > Nul");
        return 0;
    
    }

    if(!strcmp(dato, "area") == 0) {
    
        printf("Ora inserisci la grandezza del %s: ", dato);
    
    } else {
    
        printf("Ora inserisci la grandezza dell'%s: ", dato);
    
    }

    scanf("%f", &number);

    if (strcmp(dato, "raggio") == 0) {
        
        float perimeter = 2 * PI * number;
        float area = PI * number * number;
        
        printf("Perimetro: %f\nArea: %f", perimeter, area);

    } else if (strcmp(dato, "perimetro") == 0) {
        
        float raggio = number / (2 * PI);
        float area = PI * raggio * raggio;
        
        printf("Raggio: %f\nArea: %f", raggio, area);
    
    } else if (strcmp(dato, "area") == 0) {
    
        float raggio = sqrt(number / PI);
        float perimeter = 2 * PI * raggio;
        
        printf("Raggio: %f\nPerimetro: %f", raggio, perimeter);
    
    } else {
    
        printf("Cosa hai inserito?..");
    
    }
    
    printf("\n\nPremi un tasto per uscire dal programma\t");
    system("Pause > Nul");
    
    return 0;
}