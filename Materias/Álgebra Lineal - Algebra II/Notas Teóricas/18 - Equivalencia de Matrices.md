---
Materia: Álgebra
tags:
  - matrices
---
## Matrices equivalentes por filas
Sean $A$ y $B$ dos matrices $m \times n$. Diremos que $B$ es equivalente por filas a $A$, si $B$ se puede obtener de $A$ por un número finito de operaciones elementales por fila. 

**Observación:** denotamos $A \sim B$, si $B$ es equivalente a $A$ por filas. Entonces esta relación es una relación de equivalencia, es decir es reflexiva, simétrica y transitiva. 

### Ejemplo
Se tiene que la matriz $$A= 	\begin{bmatrix} 3 & 9 & 6 \\ 4&8&4 \\ 0&2&2 \end{bmatrix}$$ es equivalente por fila a la matriz $$B = \begin{bmatrix} 1&0&-1 \\ 0&0&0\\  0&-1&-1 \end{bmatrix}.$$ Ya que: 
$$
>\begin{bmatrix}
3 & 9 & 6 \\ 4&8&4 \\ 0&2&2
\end{bmatrix} \stackrel{F_1/3}{\longrightarrow}
\begin{bmatrix}
1 & 3 & 2 \\ 4&8&4 \\ 0&2&2
\end{bmatrix} \stackrel{F_2 -4F_1}{\longrightarrow}
\begin{bmatrix} 1 & 3 & 2 \\ 0&-4&-4 \\ 0&2&2 \end{bmatrix}  
\stackrel{F_2/4}{\longrightarrow}  \begin{bmatrix} 1 & 3 & 2 \\ 0&-1&-1 \\ 0&2&2  \end{bmatrix} \\
> $$
$$
> \stackrel{F_1 + 3F_2}{\longrightarrow} \begin{bmatrix}
1 & 0& -1 \\ 0&-1&-1 \\ 0&2&2 \end{bmatrix} \stackrel{F_3 + 2F_2}{\longrightarrow} \begin{bmatrix} 1 & 0& -1 \\ 0&-1&-1 \\ 0&0&0 \end{bmatrix} \stackrel{F_3\leftrightarrow F_2}{\longrightarrow}  \begin{bmatrix} 1 & 0& -1 \\ 0&0&0\\  0&-1&-1 \end{bmatrix}.
> $$
Comprobamos fácilmente la propiedad reflexiva, pues podemos llegar de la matriz $B$ a la matriz $A$ haciendo, sucesivamente, la operaciones inversas en orden inverso:
$$
> \begin{bmatrix}1 & 0& -1 \\ 0&0&0\\  0&-1&-1 \end{bmatrix}
\stackrel{F_3\leftrightarrow F_2}{\longrightarrow} \begin{bmatrix}1 & 0& -1 \\ 0&-1&-1 \\ 0&0&0 \end{bmatrix} \stackrel{F_3 - 2F_2}{\longrightarrow} \begin{bmatrix}1 & 0& -1 \\ 0&-1&-1 \\ 0&2&2 \end{bmatrix} \\ \stackrel{F_1 - 3F_2}{\longrightarrow} \begin{bmatrix}1 & 3 & 2 \\ 0&-1&-1 \\ 0&2&2 \end{bmatrix}$$
$$\stackrel{4F_2}{\longrightarrow} \begin{bmatrix}1 & 3 & 2 \\ 0&-4&-4 \\ 0&2&2 \end{bmatrix} \stackrel{F_2 +4F_1}{\longrightarrow} \begin{bmatrix} 1 & 3 & 2 \\ 4&8&4 \\ 0&2&2\end{bmatrix} \stackrel{3F_1}{\longrightarrow} \begin{bmatrix} 3 & 9 & 6 \\ 4&8&4 \\ 0&2&2 \end{bmatrix}.$$
