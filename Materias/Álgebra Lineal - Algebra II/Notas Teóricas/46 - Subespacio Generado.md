---
Materia: Álgebra
tags:
  - vectores
  - subespacios
  - comb_lineal
---
Sea $V$ un espacio vectorial sobre $K$ y sean $v_1,\ldots,v_k \in V$. Al  subespacio vectorial $W = \{\lambda_1v_1+\cdots+\lambda_kv_k: \lambda_1,\ldots,\lambda_k \in K \}$ de las combinaciones lineales de $v_1,\ldots,v_k$ se lo denomina *subespacio generado por $v_1,\ldots,v_k$* y se lo denota  
$$\begin{align*} W &=& \langle v_1,\ldots,v_k \rangle, &\quad \text{ o } \\ W &=&  \operatorname{gen}\left\{ v_1,\ldots,v_k\right\} &\quad \text{ o } \\ W &=&  \operatorname{span}\left\{ v_1,\ldots,v_k\right\}.&\end{align*}$$ Además, en este caso, diremos que el conjunto $S = \left\{ v_1,\ldots,v_k \right\}$ *genera* al subespacio $W$  o que los vectores $v_1,\ldots,v_k$ *generan* $W$.

### Teorema
Sea $V$ un espacio vectorial sobre $K$. Entonces la intersección de subespacios vectoriales es un subespacio vectorial. 

## Conjunto Suma
Sea $V$ un espacio vectorial sobre $K$ y sean $S_1,\ldots,S_k$ subconjuntos  de $V$. definimos  $$S_1+  \cdots +S_k := \left\{s_1+\cdots+s_k: s_i \in S_i, 1 \le i \le k \right\},$$ el conjunto **suma de los  $S_1,\ldots,S_k$.**


### Teorema
Sea $V$ un espacio vectorial sobre $K$ y sean $W_1,\ldots,W_k$ subespacios  de $V$. Entonces $W= W_1+\cdots+W_k$ es un subespacio de $V$.


### Proposición
Sea $V$ un espacio vectorial sobre $K$ y sean $v_1,\ldots,v_r$ elementos de   de $V$. Entonces $$\langle v_1,\ldots,v_r \rangle = \langle v_1 \rangle+ \cdots + \langle v_r \rangle.$$


### Ejemplo
Probar que toda recta que pasa por  el origen en $R^2$ es un subespacio de $R^2$. 
Sea $K = R$ y $V= R^2$. Consideremos los vectores que representan a las rectas que pasan por el origen, es decir, las rectas que pasan por $(0,0)$ y tiene como vector director a $(x_1,x_2)$, $(0,0)+t(x_1,x_2)$: $$v_1 = (0,0), \qquad v_2 = (x_1,x_2)$$  Sea $W= \langle v_1,v_2 \rangle$. Ahora bien, $w \in W$, si y sólo si $w = \lambda_1 v_1+\lambda_2 v_2$, con $\lambda_1,\lambda_2 \in R$. Es decir: $$w = \lambda_1 (0,0)+\lambda_2 (x_1,x_2) = (\lambda_2x_1,\lambda_2x_2)$$
Luego,  también podríamos escribir: $$ W = \left\{(x_1,x_2)\in R^2: x_1 = \lambda_2x_1, x_2 = \lambda_2x_2, \lambda_2\in R \right\}.$$ Por lo tanto, toda recta que pasa por el origen en $R^2$ *es un subespacio* de $R^2$.

