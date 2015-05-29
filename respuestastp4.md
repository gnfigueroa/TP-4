**Cuestionario TP4:**



*1.	Explique la primer expresi�n de la sentencia for de esta funci�n main. �Qu� significa la coma? �Es un operador?*
	*�Qu� otra expresi�n equivalente existe?*

**Rta:** En primer lugar podemos decir que la primera expresion es la siguiente:
	
	**nl = 0, nc = 0;**

	Efectivamente, es un operador binario que nos indica el orden de evaluacion de las dos expresiones, el orden seria de izquierda
	a derecha. Cabe destacar que para este caso no afecta el orden de evaluacion ya que dara el mismo resultado de las fos formas. 


	Otra expresion equivalente que existe es la siguiente:
		**nl = nc = 0;**

	En este caso juega un papel principal la asociatividad ya que el orden de evaluacion sera de derecha a izquierda.




*2. 	�Por qu� son necesarios los par�ntesis para el expresi�n c=getchar()? �Qu� ocurrir�a si no los usamos?*


**Rta:** Los Parentesis logran encerrar la expresion, son necesarias ya que si no estuvieran los parentesis
	 en primera instancia se evaluar�a getchar()!= EOF lo cual devolver�a un valor l�gico, es decir, '1' en el caso de ser verdadero, 
	 o '0' en el caso de ser falso. Luego este valor ser�a asignado a la variable 'c'.


*3. 	Describa la sem�ntica y la pragm�tica de la sentencia if que est� a continuaci�n de la sentencia for.*
	*[K&R1988 7.6 Error Handling - Stderr and Exit].*

**Rta:** La sentencia **if** que se encuentra a continuaci�n de la sentencia **for** es la siguiente:
	 if (!feof (stdin))
		perror ("No se pudo seguir leyendo debido a un error");
	
	* Sem�ntica: la sentencia **if** eval�a la expresi�n `feof (stdin)` y la niega. En caso de resultar verdadero, invoca a **perror**.
	* Pragm�tica: se utiliza esta sentencia para saber si el programa finaliz� debido a un error en la obtenci�n de datos del flujo o no.
	

*4. 	Describa la funci�n perror. [K&R1988 Appendix B - Standard Library -- B.1.7 Error Functions].*

**Rta:** La funci�n **Perror** escribe una secuencia de caracteres al stream estandar de errores (stderror), sale directamente sin demoras transformando
	 en un mensaje de error. 

*5. 	Reemplace la expresi�n !feof(stdin)por una equivalente. Ayuda: ferror. Explique la sem�ntica de*
	*feof y de ferror. �Las expresiones !feof(stdin)y ferror(stdin)son mutuamente excluyentes?*
	*�Que pragmatica tiene en este programa?*


**Rta:** Se puede reemplazar a traves de **ferror(stdin)** como equivalente. **ferror** sirve para determinar si el flujo es en estado de error o no. 
	No son mutuamente excluyente.
	**ferror(stdin)** son predicados que devuelven '1' 0 '0'.

*6.	Explique el formato %.1f [K&R1988 Chapter 7 - Input and Output -- 7.2 Formatted Output - printf].*

**Rta:** El formato que recibe un numero flotante y se imprime por pantalla la parte entera junto con un digito como decimal.

*7.	�Por qu� se aplica un casteo a la expresi�n nl?*

**Rta:** **Casteo = (float)nl** se aplica para lograr una mayor precision aparte de dar un valor. Una expresion tiene un tipo de datos y cambia el tipo
	de dato de la expresion, no hay efecto colateral y solamente se aplica en ese instante.


*8.	Ejecute el programa con el teclado como entrada y la pantalla como salida.*

**Rta:** longitud promedio: 24.0.

*9. 	Ejecute el programa utilizando como entrada al archivo con el programa fuente, Promediar.c, y como salida a estadisticas.txt.*

**Rta:** >promediar.exe<promediar.c>estadisticas.txt.
	Devuelve el archivo la siguiente informacion: Longitud promedio: 30.8.
	

*10.	�Este programa funciona correctamente para cualquier entrada? Ayuda: expresi�n condicional [K&R1988*
	*Chapter 2 - Types, Operators and Expressions -- 2.11 Conditional Expressions].*

**Rta:** No funciona correctamente para los casos de vacio, lo ideal es resolver con el operador condicional  
	los casos de division por 0. ej: **a?b:c**, el operador tiene un orden de evaluaci�n, en primer lugar evalua 
	*a* si es **verdadero** evalua **b** y no **c**, y en caso de evaluar **a** si es **falso** evalua **c** y no
	**b**. 

*11.	Analice si la expresi�n que calcula el promedio es precisa. �Cuenta la cantidad de caracteres correctamente?*

**Rta:** No es preciso ya que esta contando los **\n** como cantidad de caracteres tambien.


*12.	�Qu� cambios se deben hacer al programa para que tambi�n informe la cantidad de l�neas y la cantidad de caracteres en la entrada?*

**Rta:**  Los cambios que se deberian hacer son los siguientes en la logica del programa:
	
		if(c=='\n')
			++nl;
		else
			++nc;


	
*13.	Considerando las respuestas a 10, 11 y 12, escriba un nuevo programa: Promediar2.c.*

