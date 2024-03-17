---
Materia: Álgebra
tags:
  - vectores
  - coordenadas
  - comb_lineal
---
> [!Prop] Proposición
> Sea $V$  espacio vectorial de dimensión finita y sea $\mathcal{B} = \{v_1,\ldots,v_n\}$ una base ordenada de $V$. Entonces, para cada $v \in V$,  existen únicos $x_1,\ldots,x_n \in K$ tales que $$v =   x_1v_1 + \cdots +x_nv_n.$$

**Demostración** Como $v_1,\ldots,v_n$  generan $V$,  es claro que existen $x_1,\ldots,x_n \in K$ tales que $v =   x_1v_1 + \cdots +x_nv_n$. Sean $y_1,\ldots,y_n \in K$ tales que $v =   y_1v_1 + \cdots +y_nv_n$. Veremos que $x_i = y_i$ para $1 \le i \le n$.
Como $v =  \sum_{i=1}^{n} x_iv_i$ y $v =  \sum_{i=1}^{n} y_iv_i$,  restando miembro a miembro obtenemos 
            $$
            0 =   \sum_{i=1}^{n} (x_i-y_i)v_i.
            $$
Ahora bien,  $v_1,\ldots,v_n$ son  LI, por lo tanto todos los coeficientes de la ecuación anterior son nulos, es decir $x_i-y_i=0$ para $1 \le i \le n$ y entonces $x_i = y_i$ para $1 \le i \le n$.

---
> [!Def] Definición
>Sea $V$  espacio vectorial de dimensión finita y sea $\mathcal{B} = \{v_1,\ldots,v_n\}$ una base ordenada de $V$, si $v \in V$ y $$v =   x_1v_1 + \cdots +x_nv_n,$$  entonces $x_i$ es la coordenada $i$-ésima de $v$ y denotamos al vector coordenada como
$$[v]_\mathcal{B} = (x_1,\ldots,x_n).$$También nos será útil describir a $v$ como una matriz $n \times 1$ y en ese caso hablaremos de la matriz de $v$  en la base  $\mathcal{B}$: $$ [v]_\mathcal{B} = \begin{bmatrix}x_1 \\ \vdots \\ x_n\end{bmatrix}. $$ 

---
> [!Teorema] Teorema. 
> Sea $\mathcal{B}=\{v_1,\ldots,v_n\}$ una base ordenada de $V$ un $K$-espacio vectorial. Entonces
> - $[v + w]_\mathcal{B} = [v]_\mathcal{B} +[w]_\mathcal{B}$, para $v,w \in V$,
> - $[\lambda v]_\mathcal{B} = \lambda[v]_\mathcal{B}$, para $\lambda \in K$ y $v \in V$.
