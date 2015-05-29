**Cuestionario TP4:**



*1.	Explique la primer expresión de la sentencia for de esta función main. ¿Qué significa la coma? ¿Es un operador?*
	*¿Qué otra expresión equivalente existe?*

**Rta:** En primer lugar podemos decir que la primera expresion es la siguiente:
	
	**nl = 0, nc = 0;**

	Efectivamente, es un operador binario que nos indica el orden de evaluacion de las dos expresiones, el orden seria de izquierda
	a derecha. Cabe destacar que para este caso no afecta el orden de evaluacion ya que dara el mismo resultado de las fos formas. 


	Otra expresion equivalente que existe es la siguiente:
		**nl = nc = 0;**

	En este caso juega un papel principal la asociatividad ya que el orden de evaluacion sera de derecha a izquierda.




*2. 	¿Por qué son necesarios los paréntesis para el expresión c=getchar()? ¿Qué ocurriría si no los usamos?*


**Rta:** Los Parentesis logran encerrar la expresion, son necesarias ya que si no estuvieran los parentesis
	 en primera instancia se evaluaría getchar()!= EOF lo cual devolvería un valor lógico, es decir, '1' en el caso de ser verdadero, 
	 o '0' en el caso de ser falso. Luego este valor sería asignado a la variable 'c'.


*3. 	Describa la semántica y la pragmática de la sentencia if que está a continuación de la sentencia for.*
	*[K&R1988 7.6 Error Handling - Stderr and Exit].*

**Rta:** La sentencia **if** que se encuentra a continuación de la sentencia **for** es la siguiente:
	 if (!feof (stdin))
		perror ("No se pudo seguir leyendo debido a un error");
	
	* Semántica: la sentencia **if** evalúa la expresión `feof (stdin)` y la niega. En caso de resultar verdadero, invoca a **perror**.
	* Pragmática: se utiliza esta sentencia para saber si el programa finalizó debido a un error en la obtención de datos del flujo o no.
	

*4. 	Describa la función perror. [K&R1988 Appendix B - Standard Library -- B.1.7 Error Functions].*

**Rta:** La función **Perror** escribe una secuencia de caracteres al stream estandar de errores (stderror), sale directamente sin demoras transformando
	 en un mensaje de error. 

*5. 	Reemplace la expresión !feof(stdin)por una equivalente. Ayuda: ferror. Explique la semántica de*
	*feof y de ferror. ¿Las expresiones !feof(stdin)y ferror(stdin)son mutuamente excluyentes?*
	*¿Que pragmatica tiene en este programa?*


**Rta:** Se puede reemplazar a traves de **ferror(stdin)** como equivalente. **ferror** sirve para determinar si el flujo es en estado de error o no. 
	No son mutuamente excluyente.
	**ferror(stdin)** son predicados que devuelven '1' 0 '0'.

*6.	Explique el formato %.1f [K&R1988 Chapter 7 - Input and Output -- 7.2 Formatted Output - printf].*

**Rta:** El formato que recibe un numero flotante y se imprime por pantalla la parte entera junto con un digito como decimal.

*7.	¿Por qué se aplica un casteo a la expresión nl?*

**Rta:** **Casteo = (float)nl** se aplica para lograr una mayor precision aparte de dar un valor. Una expresion tiene un tipo de datos y cambia el tipo
	de dato de la expresion, no hay efecto colateral y solamente se aplica en ese instante.


*8.	Ejecute el programa con el teclado como entrada y la pantalla como salida.*

**Rta:** longitud promedio: 24.0.

*9. 	Ejecute el programa utilizando como entrada al archivo con el programa fuente, Promediar.c, y como salida a estadisticas.txt.*

**Rta:** >promediar.exe<promediar.c>estadisticas.txt.
	Devuelve el archivo la siguiente informacion: Longitud promedio: 30.8.
	

*10.	¿Este programa funciona correctamente para cualquier entrada? Ayuda: expresión condicional [K&R1988*
	*Chapter 2 - Types, Operators and Expressions -- 2.11 Conditional Expressions].*

**Rta:** No funciona correctamente para los casos de vacio, lo ideal es resolver con el operador condicional  
	los casos de division por 0. ej: **a?b:c**, el operador tiene un orden de evaluación, en primer lugar evalua 
	*a* si es **verdadero** evalua **b** y no **c**, y en caso de evaluar **a** si es **falso** evalua **c** y no
	**b**. 

*11.	Analice si la expresión que calcula el promedio es precisa. ¿Cuenta la cantidad de caracteres correctamente?*

**Rta:** No es preciso ya que esta contando los **\n** como cantidad de caracteres tambien.


*12.	¿Qué cambios se deben hacer al programa para que también informe la cantidad de líneas y la cantidad de caracteres en la entrada?*

**Rta:**  Los cambios que se deberian hacer son los siguientes en la logica del programa:
	
		if(c=='\n')
			++nl;
		else
			++nc;


	
*13.	Considerando las respuestas a 10, 11 y 12, escriba un nuevo programa: Promediar2.c.*

