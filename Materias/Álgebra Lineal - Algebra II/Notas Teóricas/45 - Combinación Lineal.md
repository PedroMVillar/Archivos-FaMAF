---
Materia: Álgebra
tags:
  - comb_lineal
  - vectores
---
Sea $V$ espacio vectorial sobre $K$ y $v_1,\ldots,v_n$ vectores en $V$. Dado $v \in V$, diremos que $v$  es combinación lineal de los $v_1,\ldots,v_n$ si existen escalares $\lambda_1,\ldots,\lambda_n$ en $K$,  tal que $$v = \lambda_1v_1+\cdots+\lambda_nv_n.$$


### Observación
La pregunta de si un vector $v =(b_1,\ldots,b_m) \in K^m$ es combinación lineal de vectores $v_1,\ldots,v_n \in K^m$ se resuelve con un sistema de ecuaciones lineales: si $$v_i = (a_{1i},\ldots,a_{mi}), \quad \text{para $1 \le i \le n$,}$$
entonces $v = \lambda_1v_1 + \cdots +\lambda_nv_n$ se traduce, en coordenadas, a
$$\begin{align*}(b_1,\ldots,b_m) &= \lambda_1(a_{11},\ldots,a_{m1}) + \cdots +\lambda_n(a_{1n},\ldots,a_{mn}) \\ &= (\lambda_1a_{11} + \cdots+ \lambda_na_{1n}, \ldots, \lambda_1a_{m1} + \cdots+ \lambda_na_{mn}).\end{align*}$$ Luego, $v$  es combinación lineal de los vectores $v_1,\ldots,v_n \in K^m$ si y sólo si  el sistema de ecuaciones: $$\begin{matrix}
    a_{11}\lambda_1& + &a_{12}\lambda_2& + &\cdots& + &a_{1n}\lambda_n &= &b_1\\
    \vdots&  &\vdots& &&  &\vdots \\
    a_{m1}\lambda_1& + &a_{m2}\lambda_2& + &\cdots& + &a_{mn}\lambda_n &=&b_m,
    \end{matrix}$$
  con incógnitas $\lambda_1,\ldots, \lambda_n$ tiene solución.

### Teorema
Sea $V$ un espacio vectorial sobre $K$ y sean $v_1,\ldots,v_k \in V$. Entonces $$W = \{\lambda_1v_1+\cdots+\lambda_kv_k: \lambda_1,\ldots,\lambda_k \in K \}$$
es un subespacio vectorial. Es decir,  el conjunto de las combinaciones lineales de $v_1,\ldots,v_k$ es un subespacio vectorial.

#### Demostración
Sean $\lambda_1v_1+\cdots+\lambda_kv_k$ y $\mu_1v_1+\cdots+\mu_kv_k$ dos combinaciones lineales de $v_1,\ldots,v_k$, entonces $$\begin{align*}
        (\lambda_1v_1+\cdots+\lambda_kv_k)+(\mu_1v_1+\cdots+\mu_kv_k) &=  \lambda_1v_1+\mu_1v_1+\cdots+\lambda_kv_k+\mu_kv_k\\
        &= (\lambda_1+\mu_1)v_1+\cdots+(\lambda_k+\mu_k)v_k,
    \end{align*}$$
que es  una combinación lineal de  $v_1,\ldots,v_k$ y por lo tanto pertenece a $W$.
Ahora, si $\lambda \in K$ y $\lambda_1v_1+\cdots+\lambda_kv_k$  es una combinación lineal de $v_1,\ldots,v_k$,  entonces $$\begin{align*}
    \lambda (\lambda_1v_1+\cdots+\lambda_kv_k) &=  \lambda(\lambda_1v_1)+\cdots+\lambda(\lambda_kv_k)\\
    &= (\lambda\lambda_1)v_1+\cdots+(\lambda\lambda_k)v_k,
    \end{align*}$$
que es  una combinación lineal de  $v_1,\ldots,v_k$ y por lo tanto pertenece a $W$.


### Ejemplo
Demostrar que $(5,12,5)$  es combinación lineal de los vectores $(1,-5,2), (0,1,-1), (1,2,-1)$. Planteamos la ecuación:
$$\begin{align*} (5,12,5) &= \lambda_1(1,-5,2)+\lambda_2 (0,1,-1)+\lambda_3 (1,2,-1) \\&=  (\lambda_1+\lambda_3,-5\lambda_1+\lambda_2+2\lambda_3,2\lambda_1-\lambda_2-\lambda_3). \end{align*}$$
Por consiguiente,  esta ecuación se resuelve con el siguiente sistema de ecuaciones
$$\begin{align*} \lambda_1+\lambda_3 &= 5 \\ -5\lambda_1+\lambda_2+2\lambda_3 &= 12 \\ 2\lambda_1-\lambda_2-\lambda_3 &= 5. \end{align*}$$
Ahora bien, usando el método de Gauss
$$ \begin{multline*} \left[\begin{array}{@{}*{3}{c}|c@{}}1 & 0 & 1 &  5 \\ -5 & 1 & 2 &  12 \\	2 & -1 & -1 &  5  \end{array}\right] \  \stackrel[F_3 -2F_1]{F_2 + 5F_1}{\longrightarrow}  \left[\begin{array}{@{}*{3}{c}|c@{}}1 & 0 & 1 &  5 \\ 0 & 1 & 7 &  37 \\	0 & -1 & -3 &  -5  \end{array}\right] \stackrel{F_3+F_1}{\longrightarrow} \left[\begin{array}{@{}*{3}{c}|c@{}}1 & 0 & 1 &  5 \\ 0 & 1 & 7 &  37 \\	0 & 0 & 4 & 32  \end{array}\right] \\ \stackrel{F_3/4}{\longrightarrow}  \left[\begin{array}{@{}*{3}{c}|c@{}}1 & 0 & 1 & 5 \\ 0 & 1 & 7 & 37 \\	0 & 0 & 1& 8  \end{array}\right] \stackrel[F_2 -7F_3]{F_1 - F_3}{\longrightarrow} \left[\begin{array}{@{}*{3}{c}|c@{}}1 & 0 & 0 & -3 \\ 0 & 1 & 0 &  -19 \\	0 & 0 & 1& 8  \end{array}\right]. \end{multline*}$$	Luego $\lambda_1= -3$, $\lambda_2 = -19$ y $\lambda_3=8$,  es decir $$\begin{align*} (5,12,5) &= -3(1,-5,2)-19 (0,1,-1)+8 (1,2,-1). \end{align*}$$
