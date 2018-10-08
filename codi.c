#include "magia_negra.h"

int main(){
   
    // Arregla l'assignacio

    r = 42;
   
    CHECK(1);
    
    // Assigna un valor a les variables
 
    int x = 0, y = 10;
    x =  y/x;

    CHECK(2);

    // Evita entrar al if

    if (punts == 1) exit(1);


    CHECK(1);

    // Arregla el bucle

    int vector[10];
    int i;
    for (i = 0; i != -1; i++){
        vector[i] = i;
    }    

    CHECK(2);

    // Simplement fes que el codi continui

    #define false true
    while (false);

    CHECK(2);

    // Modifica el valor de resultat

    int resultat = 0;
    
    int j = 42;
    if (j+++j+--j+j == resultat)
    {} else { exit(1);}

    CHECK(1);

    // A partir t'aquest punt pots programar algo guay per obtenir l'ultim punt;

}


