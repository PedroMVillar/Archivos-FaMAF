---
Materia: Álgebra
tags:
  - matrices
  - reduccion
---
Consideremos el siguiente sistema de $m$ ecuaciones lineales con $n$ incógnitas: $$\begin{matrix} a_{11}x_1& + &a_{12}x_2& + &\cdots& + &a_{1n}x_n &= &y_1\\ \vdots&  &\vdots& &&  &\vdots \\ a_{m1}x_1& + &a_{m2}x_2& + &\cdots& + &a_{mn}x_n &=&y_n \end{matrix}$$
Planteado  matricialmente el sistema es $AX=Y$  y denotamos $[A|Y]$ la matriz ampliada del sistema. El  procedimiento nos permitirá obtener en forma algorítmica y sencilla las soluciones del sistema:
- **1.** Nos ubicamos en la primera fila de $[A|bY]$.
- **2.** Si la fila de $A$ es $0$ y no es la última, pasar a la fila siguiente.
- **3.** Si la fila de $A$  no es $0$,
	- si el primera entrada no nula está en  la columna $k$ de $A$ y su valor es $c$, dividir la fila por $c$ (ahora la primera entrada no nula vale $1$),
	- con operaciones elementales del tipo $F_r+ tF_s$ hacer $0$  todas las entradas en la columna $k$ (menos la de la columna actual).  

De esta forma obtenemos una nueva matriz ampliada,  que llamaremos, nuevamente, $[A|Y]$, y ahora volvemos al comienzo del paso **2.**
- **4.** Permutar las filas hasta obtener una MERF de $A$. 

**El método o  algoritmo o se denomina eliminación de Gauss o eliminación de Gauss-Jordan o eliminación gaussiana. **