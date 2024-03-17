// Comandos GDB
/*
- gdb proy3_ejecutable: Inicia GDB con tu programa. Debes estar en el mismo directorio que proy3_ejecutable o proporcionar la ruta completa al archivo.

- run: Ejecuta tu programa. Si tu programa espera argumentos, puedes proporcionarlos después de run, por ejemplo, run arg1 arg2.

- break numero_de_linea: Establece un punto de interrupción en la línea especificada. Por ejemplo, break 10 establece un punto de interrupción en la línea 10.

- continue: Continúa la ejecución del programa hasta el siguiente punto de interrupción o hasta que el programa termine.

- next: Ejecuta la siguiente línea de código. Si la línea actual es una llamada a una función, next ejecuta toda la función y se detiene en la siguiente línea de la función actual.

- step: Similar a next, pero si la línea actual es una llamada a una función, step se detiene en la primera línea de esa función.

- print expresion: Imprime el valor de la expresión. Por ejemplo, print x imprimirá el valor de la variable x.

- quit: Sale de GDB.
*/
// Ejecutar codigo de C con flags
/*
gcc -Wall -Wextra -std=c99 archivo.c -o ejecutable
gcc: Compilador de C
○ GNU Compiler Collection: compilador libre del proyecto GNU
○ las opciones que vienen después se llaman "flags":
■ -Wall: Chequea todas las advertencias
■ -Wextra: chequeos extras
■ -std=c99: chequea que se programe de acuerdo al estándar del 1999
○ archivo.c: el (o los) archivos de entrada:
○ -o NOMBRE_EJECUTABLE: (ejecutable) Nombre del archivo
ejecutable (a.out por defecto)
*/

// Assert
/*
● En caso de ingresar datos que incumplen la aserción:
"main: main.c:7: main: Assertion `i != 4' failed. Aborted"
● Puede usarse para comprobar que una pre-condición
se satisface antes de llamar a una función
● Puede usarse para comprobar que una postcondición
se satisface después de llamar a una función
● Para cualquier otra suposición que estemos seguros
que se tenga que cumplir (caso contrario, el programa
no tiene sentido que continúe)
*/

// Limits
/*
Esta librería define los valores máximos y mínimos de los
tipos básicos de C
● Podemos utilizarla por ejemplo, para cuando en una
derivación necesitamos utilizar -∞ o +∞
*/

// Estructuras struct
/*
Las estructuras son utilizadas en la soluciones de algunos
problemas, donde es necesario agrupar datos de diferentes
tipos. También pueden ser utilizadas para manejar datos
que serían muy difícil de describir en los tipos de datos
primitivos.
● En el lenguaje "C" se utiliza el comando struct para agrupar
diferentes valores de acuerdo a lo que se necesite.
● Para hacer una analogía, las structs, se parecen a una
tupla, donde a cada elemento le asigno un nombre, para
luego poder referirme más fácilmente.
*/

// Sinonimo de tipos
/*
● La sentencia typedef no solo se aplica a estructuras sino
que permite definir sinónimos para cualquier tipo (igual que
type en haskell)
● Se debe indicar primero el tipo original y luego el sinónimo
que se va a definir:

typedef <tipo_viejo> <tipo_nuevo>;
● Por ejemplo si se quiere definir un nuevo tipo letra como
un sinónimo de char:
typedef char letra;
*/