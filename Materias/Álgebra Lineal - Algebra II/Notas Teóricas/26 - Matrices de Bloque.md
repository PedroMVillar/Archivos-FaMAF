---
Materia: Álgebra
tags:
  - matrices
---
Si $k_1, k_2 \in N$ y $A_{ij} \in K^{k_i \times k_j}$, para $i,j=1,2$, entonces podemos combinar esas matrices en la matriz cuadrada: $$A = \begin{bmatrix} A_{11}&A_{12}\\A_{21}&A_{22}  \end{bmatrix} \in K^{(k_1 + k_2) \times (k_1 + k_2)}. $$Diremos entonces que *$A$ es una matriz de bloques  $k_1,k_2$.*
De forma mas general, una matriz de bloque es aquella matriz $A\in M_{m\times n}(K)$ que esta formada por matrices, es decir: $$\begin{pmatrix}
A_{11} & A_{12} & \cdots & A_{1k} \\
A_{21} & A_{22} & \cdots & A_{2k} \\
\vdots & \vdots & \ddots & \vdots \\
A_{l1} & A_{m1} & \cdots & A_{nk}
\end{pmatrix}$$ En donde cada matriz $A_{ij}$ es una matriz de tamaño $m_i\times n_j$ para algunos enteros positivos $m_1,...,m_l$ y $n_1,...,n_k$ tales que $m_1+...+m_l=m$ y $n_1+...+n_k=n$.  La matriz tiene entonces $l$ filas de bloques y $k$ columnas de bloques.
