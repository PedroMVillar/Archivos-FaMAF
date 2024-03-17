---
Materia: Álgebra
tags:
  - matrices
  - determinante
---
El determinante puede ser pensado como una función que a cada matriz cuadrada $n \times n$ con coeficientes en $K$,  le asocia un elemento de $K$.
## Submatriz
Sean  $i, j$ tal que  $1 \le i,j \le n$. Entonces $A(i|j)$ es la matriz $n-1 \times n-1$ que se obtiene eliminando la fila $i$ y la columna $j$ de $A$.

## Determinante
Sea $n \in \mathbb N$ y $A =[a_{ij}] \in M_n(K)$ , entonces el *determinante* de $A$, denotado $\det(A)$ se define como:
- si $n=1$,  $\det([a]) =a$;
- si $n >1$, $$\begin{align*} \det(A) &=  a_{11}\det A(1|1) - a_{21}\det A(2|1) + \cdots + (-1)^{1+n}  a_{n1}\det A(n|1) \\ &= \sum_{i=1}^{n} (-1)^{1+i}  a_{i1}\det A(i|1). \end{align*}$$

## Cofactor
Si  $1 \le i,j \le n$, al número $\det A(i|j)$ se lo llama el *menor $i,j$ de $A$* y a $$C^A_{ij}:= (-1)^{i+j} \det A(i|j)$$ se lo denomina el **cofactor $i,j$ de $A$.** Si la matriz $A$ está sobreentendida se denota, a veces, $C_{ij} := C^A_{ij}$.

### Proposición
$A$ es invertible si y solo si $\det A \not=0$.


### Proposición
Sea $A \in M_n(K)$ matriz triangular  superior cuyos elementos en la diagonal son $d_1,\ldots,d_n$. Entonces $\det A = d_1.d_2.\ldots d_n$.

#### Demostración
Podemos demostrar el resultado por inducción sobre $n$: es claro que si $n=1$,  es decir si $A = [d_1]$, el determinante vale $d_1$. Por otro lado, si $n>1$,  observemos que $A(1|1)$ es también triangular superior con valores $d_2,\ldots,d_n$  en la diagonal principal. Entonces,  usamos la definición y observamos que el desarrollo por la primera  columna solo tiene un término, pues esta columna solo tiene un coeficiente no nulo, el $d_1$ en la primera posición. Por lo tanto, 
$$
\det(A) = d_1 \det(A(1|1)) \stackrel{\text{(HI)}}{=} d_1.(d_2.\ldots.d_n).
$$
### Colorario
 $det \ Id_n = 1$.


### Colorario
Si $R$ es una MERF, entonces
 $$\begin{align*} \det R = \left\{ \begin{matrix*}[l] 1 \;&\text{si $R$ no tiene filas nulas,}\\ 0&\text{si $R$ tiene filas nulas.} \end{matrix*}\right. \end{align*}$$

#### Demostración
Si $R$ no tiene filas nulas es igual a $Id_n$ (Lema en [[21 - Teoremas y colorarios sobre matrices]]), luego $\det R = 1$. En general, $R$ es una matriz triangular superior y si tiene alguna fila nula $r$, entonces el coeficiente en la diagonal de la fila $r$ es igual a $0$ y por lo tanto 	$\det R = 0$.


