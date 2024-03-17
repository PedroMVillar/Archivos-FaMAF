---
Materia: Álgebra
tags:
  - matrices
---
Sea $A$ una matriz $m \times n$ con coeficientes en $K$. La *transpuesta* de $A$, denotada $A^t$, es la matriz  $n \times m$ que en la fila $i$ y columna $j$ tiene el coeficiente $[A]_{ji}$. Es decir $$[A^t]_{ij} = [A]_{ji}.$$ Si $A$ es una matriz $n \times n$, diremos que es \textit{simétrica}\index{matriz!simétrica} si $A^t = A$. 

### Ejemplo
Si $$A=\begin{bmatrix}a_{11}&a_{12}&a_{13}\\a_{21}&a_{22}&a_{23}\\a_{31}&a_{32}&a_{33}\end{bmatrix},$$ entonces $$A^t=\begin{bmatrix}a_{11}&a_{21}&a_{31}\\a_{12}&a_{22}&a_{32}\\a_{13}&a_{23}&a_{33}\end{bmatrix}.$$


### Proposición
Sea $A$ matriz $m \times n$.
- **1.** $(A^t)^t = A$.
- **2.** Si $B$ matriz $n \times k$,  entonces $$(AB)^t = B^t A^t.$$
- **3**. Sea $A$ matriz $n \times n$, entonces, $A$ invertible si y sólo si  $A^t$ es invertible y  en ese caso $(A^t)^{-1} = (A^{-1})^t$. 


### Teorema
Sea $A \in M_n(K)$,  entonces $$\det(A) = \det(A^t)$$


### Teorema
Si $A$ es triangular inferior con elementos en la diagonal $d_1,\ldots,d_n$,  entonces $A^t$ es triangular superior con  elementos en la diagonal $d_1,\ldots,d_n$. Y $\det A^t = d_1\ldots d_n$.


