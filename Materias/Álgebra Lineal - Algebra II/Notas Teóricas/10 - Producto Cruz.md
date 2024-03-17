---
Materia: Álgebra
tags:
  - vectores
---
Sean Sean  $v = (x_1, x_2 ,x_3)$ y $w= (y_l, y_2,y_3)$ vectores de $R^3$, definimos el *producto cruz* o *vectorial* como: $$ v \times w = (x_2y_3-y_2x_3 \ , y_1x_3-x_1y_3 \ , x_1y_2-y_1x_2)$$ Este vector resultante, es un vector perpendicular a $v$ y $w$.

## Método para hacer producto vectorial
Una regla útil parra obtener el producto vectorial $v\times w$ consiste en colocar las componentes de los vectores como filas segunda y tercera de una matriz y en la primera se ponen los vectores $e_1=(1,0,0)$, $e_2=(0,1,0)$ y $e_3=(0,0,1)$. Luego desarrollar el determinante de esta matriz por la primera fila usando el método de cofactores, esto es: $$
A = \begin{bmatrix}
e_1 & e_2 & e_3 \\ 
x_1 & x_2 & x_3 \\ 
y_1 & y_2 & y_3
\end{bmatrix} $$ $$ v \times w = cof_{11}(A)e_1-cof_{12}(A)e_2+cof_{13}(A)e_3=c_{11}e_1-c_{12}e_2+c_{13}e_3= $$ $$
e_1 \cdot det\begin{bmatrix}
x_2 & x_3\\ 
y_2 & y_3
\end{bmatrix} - 
e_2 \cdot det\begin{bmatrix}
x_1 & x_3\\ 
y_1 & y_3
\end{bmatrix} +
e_3 \cdot det\begin{bmatrix}
x_1 & x_2\\ 
y_1 & y_2
\end{bmatrix} $$ Y el determinante de matrices $2\times 2$ es simplemente la resta del producto de las diagonales: $$ v \times w = (x_2y_3-x_3y_2)e_1-(x_1y_3-x_3y_1)e_2+(x_1y_2-x_2y_1)e_3 $$ Los vectores de la base canónica básicamente convierten la expresión en un vector: $$(x_2y_3-y_2x_3 \ , y_1x_3- x_1y_3 \ , x_1y_2-y_1x_2) $$




