---
Materia: Álgebra
tags:
  - determinante
  - matrices
---
### Colorario
Sea $A  \in M_n(K)$.
- Si $A$ tiene dos filas iguales,  entonces $\det A=0$.
- Si $A$ tiene una fila nula, entonces $\det A =0$.

#### Demostración
- Sea $A$ matriz donde $F_r = F_s$ con $r\ne s$. Luego, intercambiando la fila $r$ por la fila $s$ obtenemos la misma matriz. Es decir $A  \stackrel{F_r \leftrightarrow F_s}{\longrightarrow} A$. Por el teorema, tenemos entonces que $\det A = - \det A$, por lo tanto  $\det A =0$. 
- Sea $F_r$ una fila nula de $A$, por lo tanto multiplicar por $2$ esa fila no cambia la matriz. Es decir $A  \stackrel{2F_r}{\longrightarrow} A$. Por el teorema, tenemos entonces que $\det A = 2\det A$, por lo tanto  $\det A =0$.

### Teorema
Sean $A,B \in M_n(K)$, entonces
- $A$ invertible si y solo si  $\det(A)\ne0$.
-  $\det (A B) = \det(A)\det(B)$. 
### Colorario
Sean $A,B \in M_n(K)$, entonces
- si $A$ invertible $\det(A^{-1}) = \det(A)^{-1}$,
- $\det (AB) = \det(BA)$.
#### Demostración
- Por teorema, $\det(AA^{-1}) = \det(A)\det(A^{-1})$. Como $AA^{-1} = Id_n$, entonces $1 =\det(Id_n) =  \det(AA^{-1}) = \det(A)\det(A^{-1})$. Por lo tanto  $\det(A^{-1}) = 1/\det(A)$.
- $\det (AB) = \det(A)\det(B) = \det(B)\det(A) = \det(BA)$.

### Observación
Del  corolorario anterior se deduce fácilmente,  por inducción, que si $A_1, \ldots, A_k$ son matrices $n \times n$,  y $A =  A_1 \cdots A_k$, entonces
$$
\det(A) =\det(A_1)\det(A_2) \ldots \det(A_k).
$$
### Colorario
Sea $A$ matriz $n \times n$ y $E_1,E_2,\ldots,E_t$ matrices elementales tal que $E_tE_{t-1} \ldots E_1A =B$. Entonces, 
$$\det(A) = \det(E_1)^{-1}\det(E_2)^{-1}\ldots \det(E_t)^{-1}\det(B). $$
En particular,  si $B$ tiene filas nulas, $\det(A) =0$ y  si $B$ es MERF y no tiene filas nulas $$\det(A) = \det(E_1)^{-1}\det(E_2)^{-1}\ldots \det(E_t)^{-1}.$$ 

#### Demostración
Se tiene que $$\det(B) = \det(E_1)\det(E_2)\ldots \det(E_t) \det(A).$$ Por lo tanto, $$\det(A) = \det(E_1)^{-1}\det(E_2)^{-1}\ldots \det(E_t)^{-1}\det(B).$$
Ahora bien, si $B$ tiene una fila nula, entonces su determinante es $0$ (corolario) y por lo tanto $\det(A) =0$. Si $B$ es MERF y no tiene filas nulas, entonces $B = Id$, por lo tanto $\det(B)= 1$.


