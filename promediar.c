/* Informa la longitud promedio de las líneas
* Gabriel Nicolas Figueroa
* 16 de mayo del 2015
*/

#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */


int main(void) {
int nl; /* la cantidad de lineas */
int nc; /* la cantidad de caracteres */
int c; /* el caracter leido */
for(nl = 0, nc = 0; ( c = getchar()) != EOF;)
       if(c == '\n')
            ++nl;
       else
            ++nc;    
       if( !feof(stdin) )
           perror("No se pudo seguir leyendo de la entrada debido a un error");
           
      
       printf("Longitud promedio: %.1f\n", nc>0? nc / (float)nl:0 );

       return EXIT_SUCCESS;
}
