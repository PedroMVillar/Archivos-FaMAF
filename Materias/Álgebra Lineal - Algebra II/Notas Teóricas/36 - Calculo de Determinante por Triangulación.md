---
Materia: Álgebra
tags:
  - determinante
  - matrices
  - métodos
---
Como ya sabemos, Si $A$ es una matriz triangular superior (es decir que son iguales a cero los elementos que están debajo de la diagonal principal), la aplicación del desarrollo por la primera columna muestra que $det(A)$ se obtiene multiplicando los elementos de esta diagonal.
$$
A=\begin{bmatrix} 
a_{11} & a_{12} & \cdots & a_{1j} & \cdots & a_{1n} \\ 
0 & a_{22} & \cdots & a_{2j} & \cdots & a_{2n}\\ 
\vdots & 0 & \ddots & \vdots & \ddots & \vdots \\ 
\vdots & 0 & \cdots & a_{jj} & \cdots & a_{in} \\
\vdots & 0 & \ddots & 0 & \ddots & \vdots \\
0 & \cdots & \cdots & \cdots & \cdots & a_{nn}
\end{bmatrix}
\Rightarrow det(A) = \prod_{j=1}^{n}a_{jj}
$$
Por lo tanto si se tiene una matriz que no es triangular, un método útil para obtener el determinante es reducir la matriz a triangular superior y así llegar a hacer el producto de la diagonal (siguiendo los cambios del determinante según [[34 - Op. Elementales con determinantes]])

### Ejemplo
Calcular el determinante de $A= \begin{bmatrix} 1&1&2\\2&3&1\\3&4&-5 \end{bmatrix}$.
Mediante operaciones elementales de fila encontremos una matriz $B$ equivalente a  $A$ que sea triangular superior y apliquemos el corolario anterior,  sabiendo  que por proposición, el determinante de $B$ es el producto de las entradas diagonales.  $$\begin{align*} A= \begin{bmatrix} 1&1&2\\2&3&1\\3&4&-5 \end{bmatrix} \stackrel{F_2-2F_1}{\stackrel{F_3-3F_1}{\longrightarrow}} \begin{bmatrix} 1&1&2\\0&1&-3\\0&1&-11 \end{bmatrix} \stackrel{F_3-F_2}{\longrightarrow} \begin{bmatrix} 1&1&2\\0&1&-3\\0&0&-8 \end{bmatrix} =B. \end{align*} $$ Como las operaciones elementales utilizadas de tipo 2 no cambian el determinante, tenemos que $$\det(A) = \det(B) = 1 \cdot 1 \cdot (-8) = -8.$$
