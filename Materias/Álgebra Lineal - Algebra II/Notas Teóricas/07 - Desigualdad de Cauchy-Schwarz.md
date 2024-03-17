---
Materia: Álgebra
tags:
  - vectores
---
Sea $V$  un $R$-espacio vectorial con producto interno $\langle \,,\,\rangle$ y sean $u, v\in V$. Entonces $$|\langle u, v \rangle | \le ||u||||v||.$$

## Demostración
Sea $c = \displaystyle\frac{\langle u,v\rangle}{\langle u,u\rangle} = \frac{\langle u,v\rangle}{||u||^2}$, entonces, tenemos que  $v-cu$ es ortogonal a $u$. Ahora bien, $$v = (v - cu) + cu$$ y  $(v - cu) \perp cu$. Por Pitágoras 
$$
\begin{align*}
||v||^2 &= ||v-cu||^2 +||cu||^2  \\
&=||v-cu||^2 +|c|^2||u||^2.
\end{align*}
$$
Como $||v-cu||^2 \ge 0$, tenemos que $|c|^2||u||^2 \le 	||v||^2$ y sacando raíces cuadradas obtenemos:
$$
            |c|||u|| \le ||v|| \Rightarrow \frac{|\langle u,v\rangle|}{||u||^2}||u|| \le ||v|| \Rightarrow \frac{|\langle u,v\rangle|}{||u||}\le ||v|| \Rightarrow |\langle u,v\rangle|\le ||v||||u||.
$$
