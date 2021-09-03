/*Inicia con comentarios. Típicamente:
Fecha de creación: 02/09/21
Autor: Luisa MAria Lopez Ornelas
Propósito o funcionalidad del programa: area de un circulo
Historial de versiones, o cambios importantes.
*/
 
 
#include <stdlib.h> //librería estándar de C.
#include <stdio.h>  //Librería para interacción con la pantalla.
 
int main( ){
    float radio;
    float A;
   printf ("introduzca el radio\n");
   scanf ("%f", &radio);

   
   A=3.1416*(radio *radio);

printf ("resultado del Area\n%f \n",A);

    exit(0);  
}
