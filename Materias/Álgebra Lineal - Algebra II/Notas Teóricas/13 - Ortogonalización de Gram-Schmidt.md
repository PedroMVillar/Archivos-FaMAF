---
Materia: Álgebra
tags:
  - métodos
  - vectores
  - bases
---
Sean $\{w_1,\ldots,w_k\}$ tales que $w_i$  es no nulo y  $w_i \perp w_j$ si $i\ne j$. Sea $v \in R^n$. Entonces  
 $$\begin{align*} w &= v - \frac{\langle v,w_1\rangle}{\langle w_1,w_1\rangle}w_1- \frac{\langle v,w_2\rangle}{\langle w_2,w_2\rangle}w_2 - \cdots - \frac{\langle v,w_{k}\rangle}{\langle w_{k},w_{k}\rangle}w_{k}, \end{align*} $$ satisface que $w\perp w_i$ para $1 \le i \le k$.

## Demostración
Simplemente debemos calcular  $\langle w, w_i\rangle$,  aplicando el hecho de que el producto escalar es una forma bilineal:
$$
\begin{align*}
        \langle w, w_i \rangle &= \langle  v - \sum_{j = 1}^{k} \frac{\langle v,w_{j}\rangle}{\langle w_{j},w_{j}\rangle}w_{j} , w_i \rangle 
        = \langle v, w_i\rangle -  \sum_{j = 1}^{k} \frac{\langle v,w_{j}\rangle}{\langle w_{j},w_{j}\rangle}\langle w_{j} , w_i \rangle \\
        &=  \langle v, w_i\rangle -  \langle v, w_i\rangle = 0.
\end{align*}
$$
La penúltima igualdad se debe a uno de los colorarios explicados en [[12 - Bases ortonormales en Rn]].