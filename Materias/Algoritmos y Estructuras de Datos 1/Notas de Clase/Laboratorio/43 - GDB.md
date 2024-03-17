---
Materia: Algoritmos1
tags:
  - c
---
GDB, que significa "GNU Debugger", es una herramienta de depuración poderosa y ampliamente utilizada en entornos de desarrollo de software. Está diseñada para ayudar a los programadores a encontrar errores en sus programas, analizando el comportamiento del programa durante la ejecución.
## Uso
Para usar GDB, pasar el flag `-g` a gcc:
```bash
$>gcc -Wall -Wextra -std=c99 -g main.c -o ejecmain
```
Eso le agrega al ejecutable información para debuggear (depurar) el programa (código fuente).
## Comandos básicos
1. **`run` o `r`**: Inicia la ejecución del programa. Si el programa requiere argumentos de línea de comandos, puedes proporcionarlos después de `run`.
	```bash
	gdb ./mi_programa
	(gdb) run argumento1 argumento2
	```
2. **`break` o `b`**: Establece un punto de interrupción en una línea de código específica. Cuando el programa alcanza ese punto durante la ejecución, se detendrá, permitiéndote examinar el estado del programa.
	```bash
	(gdb) break nombre_del_archivo.c:numero_de_linea
	```
3. **`continue` o `c`**: Continúa la ejecución del programa hasta el próximo punto de interrupción.
	```bash
	(gdb) continue
	```
4. **`next` o `n`**: Ejecuta la siguiente línea de código, pero no entra en funciones.
	```bash
	(gdb) next
	```
5. **`step` o `s`**: Ejecuta la siguiente línea de código, pero entra en funciones y permite seguir el flujo del programa línea por línea.
	```bash
	(gdb) step
	```
6. **`list` o `l`**: Muestra el código fuente alrededor del punto actual de ejecución.
	```bash
	(gdb) list
	```
7. **`print` o `p`**: Imprime el valor de una variable.
	```bash
	(gdb) print variable
	```
8. **`info`**: Proporciona información sobre el estado del programa, los registros, los puntos de interrupción, etc.
	```bash
	(gdb) info breakpoints
	```
9. **`backtrace` o `bt`**: Muestra la pila de llamadas (stack trace), es decir, las funciones que se están ejecutando y cómo se llamaron entre sí.
	```bash
	(gdb) backtrace
	```
10. **`quit` o `q`**: Sale de GDB.
	```bash
	(gdb) quit
	```