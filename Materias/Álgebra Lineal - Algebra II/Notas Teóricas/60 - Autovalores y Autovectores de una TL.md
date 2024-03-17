---
Materia: Álgebra
tags:
  - autovalores/vectores/espacios
  - transf_lineal
---
> [!Def] Definición
> Sea $V$ un espacio vectorial sobre el cuerpo $K$ y sea $T$ un operador lineal sobre $V$. Un *valor propio o autovalor* de $T$ es un escalar $\lambda$ de $K$ tal que existe un vector no nulo $v \in V$ con $T(v) = \lambda v$. Si $\lambda$ es un autovalor de $T$, entonces
> - cualquier  $v \in V$ tal que $T(v) = \lambda v$  se llama un vector propio o autovector de $T$ asociado al valor propio $\lambda$;
> - la colección de todos los $v \in V$ tal que $T(v) = \lambda v$  se llama espacio propio o autoespacio asociado a $\lambda$.
> 
Sea ahora $\lambda \in K$, definimos $$V_\lambda := \{v \in V: Tv = \lambda v \}.$$$V_\lambda \ne 0$ si y sólo si $\lambda$ es autovalor y en ese caso $V_\lambda$  es el autoespacio asociado a $\lambda$. 

---
> [!Teorema] Teorema. 
> Sea $V$ un espacio vectorial y sea $T:V \to V$ una aplicación lineal. Sea $\lambda \in K$ entonces, $V_\lambda$  es subespacio de $V$.

---
> [!Teorema] Teorema. 
> Sea $V$ espacio vectorial y sea $T: V \to V$ una aplicación lineal.  Sean $v_1,\ldots,v_m$ autovectores de $T$, con autovalores $\lambda_1,\ldots,\lambda_m$ respectivamente. Suponga que estos  autovalores son distintos entre si, esto es, $\lambda_i \ne \lambda_j$ si $i \ne j$. Entonces $v_1,\ldots,v_m$ son linealmente independientes.

---
> [!Prop] Colorario
> Sea $V$ espacio vectorial de dimensión $n$ y sea $T: V \to V$ una aplicación lineal que tiene $n$ autovectores $v_1,\ldots, v_n$ cuyos autovalores $\lambda_1,\ldots,\lambda_n$ son distintos entre si. Entonces $\{v_1,\ldots, v_n\}$ es una base de $V$.

---
> [!Def] Polinomio Característico 
> Sea $V$ espacio vectorial de dimensión finita y sea $T: V \to V$ lineal, el polinomio característico de $T$ es $\chi_T(x) = \det(x Id-T)$.

---
> [!Prop] Proposición
> Sea $V$ espacio vectorial de dimensión $n$ y sea $T: V \to V$ lineal. Entonces $\lambda\in K$ es autovalor si y sólo si $\lambda$ es raíz del polinomio característico.  

---
> [!Def] Diagonizable
> Sea $V$ espacio vectorial de dimensión finita y sea $T: V \to V$ lineal. Diremos que $T$ es diagonalizable si existe una base de $V$ de autovectores de $T$. 
> En el caso que $T$ sea una transformación lineal diagonalizable y $\mathcal{B} = \{v_1,\ldots,v_n \}$ sea una base de autovectores con autovalores $\lambda_1,\ldots,\lambda_n$, entonces $$T(v_i) = \lambda_i v_i, \qquad 1 \le i \le n,$$y, por lo tanto, la matriz de $T$ en  la base $\mathcal{B}$ es diagonal, más precisamente $$[T]_\mathcal{B} = \begin{bmatrix}\lambda_1 &0 & \cdots & 0 \\0 & \lambda_2 & \cdots &0 \\\vdots & &\ddots & \vdots \\0 & 0 & \ldots &\lambda_n\end{bmatrix}$$ 

---
