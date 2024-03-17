---
Materia: Álgebra
tags:
  - transf_lineal
  - matrices
---
> [!Def] Matriz de una TL
> Sean $V$ y $W$ espacios vectoriales de dimensión finita con bases ordenadas $\mathcal{B} = \{v_1,\ldots,v_n\}$  y $\mathcal{B}' = \{w_1,\ldots,w_m\}$, respectivamente. Sea $T: V \to W$ una transformación lineal tal que $$Tv_j = \sum_{i=1}^{m} a_{ij} w_i.$$ A  $A$  La matriz $m \times n$  definida por $[A]_{ij} = a_{ij}$ se la  denomina *la matriz de $T$ respecto a las bases ordenadas* $\mathcal{B}$ y $\mathcal{B}'$ y se la denota $$[T]_{\mathcal{B} \mathcal{B}'} = A .$$ Si $T: V \to V$ una transformación lineal y $\mathcal{B}$ es una base ordenada de $V$,  a la matriz $[T]_{\mathcal{B} \mathcal{B}}$ también se la denota $[T]_{\mathcal{B}}$.

> [!example]
> Sea $T: R^3 \to R^4$ definida  $$ T(x,y,z) = (2x+y, 3y, x+4z,z). $$ Sean  $\mathcal{C}_3 = \{e_1,e_2,e_3\}$ la base canónica de $R^3$ y  $\mathcal{C}_4 = \{e_1,e_2,e_3,e_4\}$ la base canónica de $R^4$. Entonces $$\begin{array}{ccccrcrcrcr} T(e_1) & = & (2,0,1,0) & = &  2e_1& + & 0.e_2& + &   e_3& + & 0.e_4  \\ T(e_2) & = & (1,3,0,0) & = &   e_1& + &  3e_2& + & 0.e_3& + & 0.e_4  \\ T(e_3) & = & (0,0,4,1) & = & 0.e_1& + & 0.e_2& + &  4e_3& + &   e_4 \end{array}$$ Por  lo tanto
> $$[T]_{\mathcal{C}_3 \mathcal{C}_4} =\begin{bmatrix} 2&1&0 \\0&3&0 \\1&0&4 \\0&0&1 \end{bmatrix}$$ Basicamente se posicionan en columnas cada vector coordenada

---
> [!Met] Método
> El método para obtener cualquier matriz de transformación lineal es el siguiente:
> Sea $[T]_{\mathcal{B} \mathcal{B}'}$ la matriz a hallar con $\mathcal{B}$ y $\mathcal{B}'$ bases ordenadas:
> - **1.** Aplicar $T$ a cada vector de $\mathcal{B}$,
> - **2.** Expresar los resultados como combinación lineal de los vectores de $\mathcal{B}'$
> - **3.** La matriz será aquella cuyas columnas sean los vectores coordenada obtenidos.

---
> [!Prop] Proposición
> Sea $V$  y $W$ un espacios vectoriales de dimensión $n$ y $m$ respectivamente y sea $T: V \to W$ una transformación lineal. Sea $\mathcal{B} = \{v_1,\ldots,v_n\}$ una base ordenada de $V$, y $\mathcal{B}' = \{w_1,\ldots,w_n\}$ una base ordenada de $W$. Entonces $$[T]_{\mathcal{B} \mathcal{B}'} [v]_{\mathcal{B}} = [T(v)]_{\mathcal{B}'}, \quad \forall \,v \in V.$$
> Es decir la el producto entre la matriz dela transformación lineal de $\mathcal{B}$ a $\mathcal{B}'$ con un vector expresado en $\mathcal{B}$, da como resultado, la transformación de dicho vector pero en la base $\mathcal{B}'$.

