---
Materia: Álgebra
tags:
  - transf_lineal
---
> [!Teorema] Teorema. 
> Sean $V$ y $W$ espacios vectoriales sobre el cuerpo $K$ Sean $T,S : V \to W$ transformaciones y $\mu \in K$. Entonces, $T + S$ y $\mu T$ son transformaciones lineales de $V$ en $W$.
> 

**Demostración** Sean $v,v' \in V$ y $\lambda \in K$, entonces
$$
\begin{array}{rlll}
                    (T + S)(\lambda v + v') &= T(\lambda v + v') + S(\lambda v + v')&\qquad&\text{(def. de $T+S$)} \\
                    &= \lambda T(v) + T(v') + \lambda S(v) + S(v')& &\text{($T$ y $S$ lineales)}\\
                    &= \lambda (T(v) +S(v)) + T(v') + S(v')&&\text{}\\
                    &= \lambda ((T+S)(v)) + (T + S) (v')& &\text{(def. de $T+S$)}\\
                    &= \lambda(T + S)(v) +(T + S) (v')&&\text{(def. de $\lambda(T + S)$)}.
                \end{array}
$$
que dice que $T + U$ es una transformación lineal. En forma análoga, si $\mu \in K$, 
$$
\begin{array}{rlll}
                (\mu T)(\lambda v + v') &= \mu T(\lambda v + v')&\qquad&\text{(def. de $\mu T$)} \\
                &= \mu \lambda T(v) + \mu T(v') &\qquad&\text{($T$ lineal)}\\
                &=  \lambda \mu T(v) + \mu T(v')&\qquad&\text{}\\
                &= \lambda (\mu T)(v) + (\mu T)(v') &\qquad&\text{(def.de $\mu T$)}.
\end{array}
$$
que dice que $\mu T$ es una transformación lineal.

---
> [!Prop] Colorario
> Sean $V$ y $W$ espacios vectoriales sobre el cuerpo $K$. Entonces, el conjunto de transformaciones lineales de $V$ en $W$ es un subespacio vectorial  de $F(V,W)$. 

---
> [!Teorema] Teorema. 
> Sean $V$, $W$ y $Z$ espacios vectoriales sobre el cuerpo $K$.  Sean $T: V \to W$ y $U: W \to Z$ transformaciones lineales. Entonces la función compuesta $U\circ T$ definida por $(U\circ T)(v) = U(T(v))$ es una transformación lineal de $V$ en $Z$.
> 

**Demostración** Sean $v, v' \in V$ y $\lambda \in K$, entonces
$$
\begin{array}{rlll}
                (U\circ T)(\lambda v + v') &= U(T(\lambda v + v'))&\qquad&\text{(def. de composición)} \\
                 &= U(\lambda T( v) + T(v'))&\qquad&\text{($T$ lineal)} \\
                 &= \lambda U(T( v)) + U(T(v'))&\qquad&\text{($U$ lineal)} \\
                 &= \lambda (U\circ T)( v) + (U\circ T)(v')&\qquad&\text{(def. de composición)}. \\
\end{array}
$$
