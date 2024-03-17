---
Materia: Álgebra
tags:
  - matrices
---
Sea $A  \in M_n(K)$, llamaremos **matriz adjunta** de **$A$** a la matriz $adj(A)=[C_{ij}]^T$ donde $C_{ij}$ es el cofactor de lugar $(i,j)$
Por lo tanto, para obtener la matriz adjunta debemos construir la matriz de los cofactores de la matriz $A$ y transponerla.

### Ejemplo
Sea $A= \begin{bmatrix} 1&1&2\\2&3&1\\3&4&-5 \end{bmatrix}$ de donde al calcular los cofactores se tiene $C_{11}=0; \ C_{12}=4; \ C_{13}=-2; \ C_{21}=-1; \ C_{22}=-4; \ C_{23}=3; \ C_{31}=1; \ C_{32}=-2; \ C_{33}=1$. Luego la adjunta de $A$ es $$A= \begin{bmatrix} 0&-1&1\\4&-4&-2\\-2&3&1 \end{bmatrix}$$
