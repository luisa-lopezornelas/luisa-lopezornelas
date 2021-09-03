/* Inicia con comentarios. Típicamente:
Fecha de creación: 02/09/21
Autor: Luisa MAria Lopez Ornelas
Propósito o funcionalidad del programa: cambio de temperaturas
Historial de versiones, o cambios importantes.
*/
 
 
#include <stdlib.h> //librería estándar de C.
#include <stdio.h>  //Librería para interacción con la pantalla.
 
int main( ){
    float celcius;
    float kelvin;
    float farenheit;
   printf ("introduzca la temperatura en celcius \n");
   scanf ("%f", &celcius);
   
   kelvin=celcius+273.15;

    printf ("centigrados a kelvin\n %f \n",kelvin );
      
   farenheit=(kelvin-273.15)*9/5+32;

    printf ("kelvin a farenheit\n %f \n",farenheit );
    
    celcius=(farenheit-32)*5/9;
    printf ("farenheit a celcius \n %f \n",celcius);

    


    exit(0);  
}
