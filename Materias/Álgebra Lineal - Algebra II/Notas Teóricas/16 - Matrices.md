---
Materia: Álgebra
tags:
  - matrices
---
Se tiene el siguiente sistema de ecuaciones 
$$
\begin{matrix}
a_{11}x_1& + &a_{12}x_2& + &\cdots& + &a_{1n}x_n &= &y_1\\
\vdots&  &\vdots& &&  &\vdots \\
a_{m1}x_1& + &a_{m2}x_2& + &\cdots& + &a_{mn}x_n &=&y_m.
\end{matrix}
$$
Observemos que podemos escribir los coeficientes de  las fórmulas de la izquierda en  un arreglo rectangular de $m$ filas y $n$ columnas:
$$
A = \begin{bmatrix}
a_{11}& a_{12}& \cdots &a_{1n} \\
\vdots&\vdots  &  &\vdots \\
a_{m1} &a_{m2}&\cdots &a_{mn}
\end{bmatrix}
$$


También  podemos escribir los $x_1,\ldots,x_n$ e $y_1,\ldots,y_n$ como una *matriz columna*.
$$
X = \begin{bmatrix}
x_1 \\
\vdots \\
x_{n}
\end{bmatrix}, \qquad
Y = \begin{bmatrix}
y_1 \\
\vdots \\
y_{m}
\end{bmatrix}
$$

## Definición
Sea $K$ cuerpo. Una **matriz** $m \times  n$ o de orden $m \times  n$ es un arreglo rectangular de elementos de $K$ con $m$ filas y $n$ columnas. A cada elemento de la matriz la llamamos *entrada* o *coeficiente*. Si $A$ es una matriz $m \times  n$, denotamos $[A]_{ij}$ la entrada que se ubica en la fila $i$ y la columna $j$. Al conjunto de matrices de orden $m \times  n$ con entradas en $K$ lo denotamos $K^{m \times n}$ o también $M_{m\times n}(K)$, o simplemente $M_{m\times n}$ si $K$  está sobreentendido. 

