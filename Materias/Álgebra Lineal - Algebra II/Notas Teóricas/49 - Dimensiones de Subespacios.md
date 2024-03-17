---
Materia: Álgebra
tags:
  - dimensión
  - subespacios
---
## Espacios de una Matriz
Sea $A = [a_{ij}] \in M_{m \times n}(K)$. El *vector fila* $i$ es el vector  $(a_{i1},\ldots,a_{in}) \in K^n$. El *espacio fila* de $A$ es el subespacio de $K^n$ generado por los $m$ vectores fila de $A$.  De forma análoga, se define  el *vector columna* $j$ al vector $(a_{1j},\ldots,a_{mj}) \in K^m$ y  el *espacio columna* de $A$ es el subespacio de $K^m$ generado por los $n$ vectores columna de $A$.  

### Ejemplo
Sea $$ A = \begin{bmatrix} 1&2&0&3&0\\ 0&0&1&4&0 \\0&0&0&0&1 \end{bmatrix} \in C^{3 \times 5}, $$ entonces, por definición, el espacio fila es el subespacio generados por las filas de la matriz: $$ W = \langle  (1,2,0,3,0), (0,0,1,4,0), (0,0,0,0,1) \rangle_C. $$ También, el espacio fila puede ser caracterizado de forma implícita: $$W =\left\{(x_1,x_2,x_3,x_4,x_5)\in C^5: x_2 = 2x_1, x_4 = 3x_1+4x_3 \right\}.$$


### Teorema
Sean $A$ matriz $m \times n$ con coeficientes en $K$, $P$ matriz $m\times m$ invertible y $B =PA$. Entonces el el espacio fila de $A$ es igual al espacio fila de $B$.

#### Demostración
Sea $A= [a_{ij}]$, $P =[p_{ij}]$ y $B = [b_{ij}]$. Como  $B= PA$, tenemos que la fila $i$ de $B$ es
$$\begin{align*}
                (b_{i1},\ldots,b_{in})&= (F_i(P).C_1(A),\ldots,F_i(P).C_n(A)) \\
                &= (\sum_{j=1}^{m} p_{ij}a_{j1}, \ldots, \sum_{j=1}^{m} p_{ij}a_{jn}) \\
                &= \sum_{j=1}^{m} p_{ij}(a_{j1}, \ldots,a_{jn}).
\end{align*}$$
Luego, cada vector fila de $B$ se puede obtener como combinación lineal de los vectores fila de $A$, y por lo tanto el espacio fila de $B$ está incluido en el espacio fila de $A$. 
Ahora bien, como $P$ invertible, podemos multiplicar por $P^{-1}$ a izquierda la fórmula $B= PA$, y obtenemos $P^{-1}B = P^{-1}P A = A$. Haciendo el mismo razonamiento que arriba concluimos que  también el espacio fila de $A$ está incluido en el espacio fila de $B$ y por lo tanto son iguales. 


### Colorario
Sean $A$ matriz $m \times n$ y $R$ la MRF equivalente por filas a $A$. Entonces, el espacio fila de $A$ es igual al espacio fila de $R$ y las filas no nulas de $R$ forman una base del espacio fila de $A$.


### Colorario
Sean $A$ matriz $n \times n$. Entonces, $A$ es invertible si y sólo si las filas de $A$ son una base de $K^n$.


### Teorema
Sea $v_1,\ldots, v_r$ vectores en $K^n$ y $W = \langle  v_1,\ldots, v_r \rangle$. Sea $A$ la matriz formada por las filas $v_1,\ldots, v_r$ y $R$ una MRF equivalente por filas a $A$ que se obtiene sin el uso de permutaciones de filas. Si $i_1,i_2,\ldots,i_s$ son las filas no nulas de $R$,  entonces $v_{i_1},v_{i_2},\ldots,v_{i_s}$ es una base de $W$.


### Teorema
Sea $A$ matriz $n \times n$ con coeficientes en $K$. Entonces son equivalentes
- $A$ es invertible.
- $A$  es equivalente por filas a $Id_n$.
- $A$ es producto de matrices elementales.
- El sistema $AX=Y$ tiene una única solución para toda matriz $Y$ de orden $n \times 1$. 
- El sistema homogéneo $AX=0$ tiene una única solución trivial.
- $\det A \ne 0$.
- Las filas de $A$ son LI.
- Las columnas de $A$ son LI.
