---
Materia: Álgebra
tags:
  - vectores
  - bases
---
Diremos que $\mathcal B =\{u_1,\ldots,u_n\}\subset R^n$ es una base ortogonal o BO de $R^n$ si $u_i \perp u_j$ cuando $i\ne j$. Diremos $\mathcal B$ que es una base ortonormal o BON si es una base ortogonal y $||u_i||=1$ para todo $i$.

### Ejemplos
- La base canónica $\mathcal C= \{e_1,\ldots,e_n\}$  es una base ortonormal de $R^n$. 
- Cualesquiera dos vectores ortogonales en $R^2$ forman una base ortogonal, por ejemplo, $(1,-1), (1,1)$.
- $\mathcal B_1 = \{(cos\theta, sen\theta,0),  (-sen\theta, cos\theta,0 ),  (0,0,1)\}$ es una BON  de $R^3$, esto se cumple ya que: 
  $$ 
 \begin{align*} \langle (cos\theta, sen\theta,0),  (-sen\theta, cos\theta,0 )\rangle &= -sen\theta cos\theta+ sen\theta cos\theta = 0 \\ \langle ( cos\theta, sen\theta,0),  (0,0,1 )\rangle &=0\\ \langle  (-sen\theta, cos\theta,0 ),  (0,0,1 )\rangle &=0. \end{align*}$$  
 Es decir,  todos los vectores son ortogonales entre sí. Luego $\mathcal B_1$  es una BON.

### Observación
Sea  $\mathcal B =\{v_1,\ldots,v_n\}$ una base ortogonal de $R^n$,  entonces si $u_i = \displaystyle\frac{v_i}{||v_i||}$ el conjunto $\mathcal B' =\{u_1,\ldots,u_n\}$ es una base ortonormal de $R^n$.

### Teorema
Sea $\mathcal B =\{u_1,\ldots,u_n\}$ una BON de $R^n$, y $v \in R^n$, entonces $$ v = \langle v,u_1\rangle u_1 +\langle v,u_2\rangle u_2 +\cdots+\langle v,u_n\rangle u_n.$$ Esto nos permite escribir cualquier vector como combinación lineal de los vectores de una base ortonormal

### Colorario
Sea $\mathcal B =\{w_1,\ldots,w_n\}$ una BO de $R^n$, y $v \in R^n$, entonces $$v = \frac{\langle v,w_1\rangle}{ \langle w_1, w_1\rangle} w_1 +\frac{\langle v,w_2\rangle}{\langle w_2, w_2\rangle} w_2 +\cdots+\frac{\langle v,w_n\rangle}{\langle w_n, w_n\rangle} w_n.$$ 

**Demostración** Como $\{w_1,\ldots,w_n\}$ es una BO,  entonces $\displaystyle\left\{\frac{w_1}{|| w_1||},\ldots,\frac{w_n}{|| w_n||}\right\}$ es una BON. Por lo tanto, 
$$
\begin{align*}
            v &= \langle v,\frac{w_1}{|| w_1||}\rangle \frac{w_1}{|| w_1||} +\langle v,\frac{w_2}{|| w_2||}\rangle \frac{w_2}{|| w_2||}
             +\cdots+\langle v,\frac{w_n}{|| w_n||}\rangle \frac{w_n}{|| w_n||} \\
             &=  \frac{\langle v,w_1\rangle}{|| w_1||^2} w_1 +\frac{\langle v,w_2\rangle}{|| w_2||^2} w_2 +\cdots+\frac{\langle v,w_n\rangle}{|| w_n||^2} w_n \\
             &= \frac{\langle v,w_1\rangle}{ \langle w_1, w_1\rangle} w_1 +\frac{\langle v,w_2\rangle}{\langle w_2, w_2\rangle} w_2 +\cdots+\frac{\langle v,w_n\rangle}{\langle w_n, w_n\rangle} w_n.
\end{align*}
$$
### Colorario
Sea $\mathcal B =\{u_1,\ldots,u_n\}$ una BON de $R^n$, y $v \in R^n$, entonces $$||v||^2 = \langle v,u_1\rangle^2 +\langle v,u_2\rangle^2  +\cdots+\langle v,u_n\rangle^2.$$

**Demostración** Por el teorema, $v = \sum_{i=1}^n  \langle v,u_i\rangle u_i$, luego 
$$
\begin{align*}
            ||v||^2 &= \langle  \sum_{i=1}^n  \langle v,u_i\rangle u_i,  \sum_{j=1}^n  \langle v,u_j\rangle u_j \rangle= \sum_{i,j=1}^n\langle \langle v,u_i\rangle u_i,  \langle v,u_j\rangle u_j \rangle \\
            &= \sum_{i,j=1}^n\langle v,u_i\rangle\langle v,u_j\rangle\langle  u_i,   u_j \rangle = \sum_{i1}^n\langle v,u_i\rangle\langle v,u_i\rangle\\
            &= \sum_{i=1}^n\langle v,u_i\rangle^2.
\end{align*}
$$