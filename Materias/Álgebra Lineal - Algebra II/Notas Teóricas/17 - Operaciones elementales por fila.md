---
Materia: Álgebra
tags:
  - matrices
---
Sea $A = [a_{ij}]$ una matriz $m \times  n$, diremos que $e$ es una operación elemental por fila si aplicada a la matriz $A$ se obtiene  $e(A)$ de la siguiente manera:
- **multiplicando la fila $r$ por una constante $c\not=0$**:
 si multiplicamos la fila $r$ por $c \not=0$,$$ e(A) = \begin{bmatrix}  F_1 \\ 	\vdots \\ cF_r \\ \vdots \\	F_m \end{bmatrix} $$ con $c \not=0$
 - **cambiando la fila $F_r$ por $F_r + tF_s$ con $r\not=s$, para algún $t \in K$:**
 si $r\not=s$, multiplicamos la fila $s$ por  $t \in K$ y la sumamos a la fila $r$, 
$$ e(A)= \begin{bmatrix} F_1 \\  \vdots \\ F_r + t F_s\\ \vdots \\	F_m \end{bmatrix}.$$
- **permutando la fila $r$ por la fila $s$:**
$$ A= \begin{bmatrix} F_1 \\ 	\vdots \\ F_r \\ \vdots \\ F_s\\ \vdots \\	F_m \end{bmatrix} \quad \Rightarrow \quad e(A)= \begin{bmatrix} F_1 \\ 	\vdots \\ F_s \\ \vdots \\ F_r\\ \vdots \\	F_m \end{bmatrix}.$$


### Teorema
A cada operación elemental por fila $e$ le corresponde otra operación elemental $e^\prime$ (del mismo tipo que $e$) tal que $e^\prime(e(A)) = A$ y $e(e^\prime(A)) = A$. En otras palabras, la operación inversa de una operación elemental es otra operación elemental del mismo tipo.  
- La operación inversa de multiplicar la fila $r$ por $c\not=0$ es multiplicar la misma fila por $1/r$.
- La operación inversa de multiplicar la fila $s$ por  $t \in K$ y sumarla a la fila $r$ es multiplicar  la fila $s$ por  $-t \in K$ y sumarla a la fila $r$.
- La operación inversa de permutar la fila $r$ por la fila $s$ es la misma operación.
