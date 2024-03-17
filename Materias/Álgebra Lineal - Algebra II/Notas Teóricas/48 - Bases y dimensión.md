---
Materia: Álgebra
tags:
  - bases
  - dimensión
---
## Base
Sea $V$ un espacio vectorial. Una *base* de $V$ es un conjunto $\mathcal{B} \subseteq V$ tal que
- $\mathcal{B}$ genera a $V$, y
- $\mathcal{B}$ es LI.
El espacio $V$ es de dimensión finita si tiene una base finita,  es decir con  un número finito de elementos.


### Teorema
Sea $V$ un espacio vectorial generado por un conjunto finito de vectores $w_1,\ldots,w_m$. Entonces todo conjunto independiente de vectores de $V$ es finito y  contiene a lo más $m$ elementos. 

#### Demostración
Sea $V = \langle w_1,\ldots,w_m\rangle$ y  $S \subset V$.   El  enunciado del teorema es equivalente a decir: $$ \text{si }S \text{ es LI } \Rightarrow |S| \le m. $$ Para demostrar este teorema es suficiente probar el contrarrecíproco del enunciado, es decir: $$\text{si }|S| > m \Rightarrow S \text{ es LD},$$ o, dicho  de otra forma, todo subconjunto $S$ de $V$ que contiene más de $m$ vectores es linealmente dependiente. Sea $S$ un tal conjunto,  entonces $S = \{v_1,\ldots,v_n\}$ con $n >m$.  Como  $w_1,\ldots,w_m$ generan $V$, existen escalares $a_{ij}$ en $K$ tales que $$v_j = \sum_{i=1}^{m}a_{ij}w_i, \qquad (1 \le j \le n).$$ Probaremos ahora que existen $x_1,\ldots,x_n \in K$ no todos nulos, tal que $x_1v_1 + \cdots+x_nv_n =0$. Ahora bien, para cualesquiera $x_1,\ldots,x_n \in K$ tenemos
$$\begin{align*}
        x_1v_1 + \cdots+x_nv_n &= \sum_{j=1}^{n} x_jv_j& \\
        & = \sum_{j=1}^{n}x_j \sum_{i=1}^{m}a_{ij}w_i& \\
        & = \sum_{j=1}^{n} \sum_{i=1}^{m}(x_ja_{ij})w_i& \\ 
        & = \sum_{i=1}^{m}(\sum_{j=1}^{n} x_ja_{ij})w_i.&  (*)
    \end{align*}$$
Si cada coeficiente que multiplica a cada $w_i$ es nulo, entonces $x_1v_1 + \cdots+x_nv_n=0$. Vamos a ver ahora que existen $x_,\ldots,x_n$ no todos nulos tal que los coeficientes que multiplica a $w_i$  en ($*$) sean todos nulos. Esto se debe a que el sistema de ecuaciones
$$\sum_{j=1}^{n} x_ja_{ij} = 0, \qquad (1 \le i \le m) $$ tiene $m$ ecuaciones  y $n > m$ incógnitas, luego, existen escalares $x_1,\ldots,x_n \in K$ no todos nulos, tal que $\sum_{j=1}^{n} x_ja_{ij} = 0$, ($1 \le i \le m$) y, por $(*)$ $$\begin{align*}
        x_1v_1 + \cdots+x_nv_n &=  \sum_{i=1}^{m}(\sum_{j=1}^{n} x_ja_{ij})w_i = \sum_{i=1}^{m}0\cdot w_i =0,
    \end{align*}$$
con algún $x_i \ne 0$. Esto quiere decir que los $v_1,\ldots,v_n$ son LD.


### Proposición
Si $V$ es un espacio vectorial de dimensión finita, entonces dos bases cualesquiera de $V$ tienen el mismo número de elementos.

#### Demostración
Como $V$ es de dimensión finita, tiene una base finita $\mathcal{B}$  de $m$ vectores, es decir,  $\mathcal{B}$ es base de $V$ y  $|\mathcal{B}| = m.$
Sea $\mathcal{B}'$  otra base de $V$, como $\mathcal{B}$  genera $V$ y  $\mathcal{B}'$ es  un conjunto LI, entonces, por el teorema anterior, $|\mathcal{B}'| \le m$. Sea $n = |\mathcal{B}'|$,  entonces $n \le m$. Por otro lado $\mathcal{B}'$ es base y, por lo tanto,  genera $V$ y  $\mathcal{B}$ es LI, luego, por el teorema anterior nuevamente,  $m \le n$, y en consecuencia $m=n$.


## Dimensión
Sea $V$ espacio vectorial de dimensión finita. Diremos que $n$  es la *dimensión* de $V$ y  denotaremos $\dim V =n$,  si existe una base de $V$  de $n$  vectores. Si $V = \{0\}$,  entonces definimos $\dim V =0$.


### Colorario
Sea $V$ un espacio vectorial de dimensión finita y sea $n = \dim V$, entonces
- cualquier subconjunto de $V$ con más de $n$ vectores es linealmente dependiente;
- ningún subconjunto de $V$ con menos de $n$ vectores puede generar $V$.



### Lema
Sea $S$ un subconjunto LI de un espacio vectorial $V$. Suponga que $w$ es un vector de $V$ que no pertenece al subespacio generado por $S$. Entonces $S \cup \{w\}$ es LI.


### Teorema
Sea $V$ espacio vectorial de dimensión finita $n$ y $S_0$ un subconjunto LI de $V$. Entonces $S_0$  es finito  y existen $w_1,\ldots,w_m$ vectores en  $V$ tal que  $S_0 \cup \{w_1,\ldots,w_m\}$ es una base de $V$. 
Es decir, todo subconjunto LI de un espacio vectorial de dimensión finita se puede completar a una base.


### Colorario
Sea $V$ espacio vectorial de dimensión finita y $V \ne \{0\}$, entonces $\dim V >0$.

### Colorario
Si $W$ es un subespacio propio de un espacio vectorial de dimensión finita $V$, entonces $W$ es de dimensión finita y  $\dim W < \dim V$.


### Teorema
Sea $V \ne 0$ espacio vectorial y $S$ un conjunto finito de generadores de $V$,  entonces existe un subconjunto $\mathcal{B}$  de $S$ que es una base. 

#### Demostración
Sea $$ C = \{|R|: R \subseteq S \;\wedge\; R \text{ es LI}\}. $$Como $V$ no es nulo  y $S$ genera $V$, $S$ contiene algún vector no nulo, que obviamente es LI, Luego, $C \ne \emptyset$. Ahora bien, $C$  es un subconjunto no vacío de  $\mathbb N$ y  acotado superiormente por $|S|$,  entonces por el axioma de buena ordenación tiene máximo. 
Sea $n$ el máximo de $C$ entonces existe  $\mathcal{B} \subseteq S$ tal que $|\mathcal{B}| =n$  y $\mathcal{B}$ es LI. Veremos que $\mathcal{B}$  es una base. Para ello, como $\mathcal{B}$ es LI, sólo falta ver que $\mathcal{B}$ genera a $V$. 
Supongamos que existe $v \in S$ tal que $v \not\in \langle \mathcal{B} \rangle$. Por el lema,  entonces  $\mathcal{B} \cup \{v\}$ es LI y este subconjunto LI de $S$ tiene $n+1$  elementos, lo cual contradice la maximalidad de $n$. Es claro entonces, que $v \in S \Rightarrow v \in \mathcal{B}$,  es decir $S \subset \langle B \rangle$. Como $S \subset \langle B \rangle$,  entonces
$V = \langle S \rangle \subset \langle B \rangle$, es decir $V =  \langle B \rangle$.

### Teorema
Si $W_1$, y $W_2$ son subespacios de dimensión finita de un espacio vectorial, entonces $W_1+ W_2$ es de dimensión finita y  $$ \dim (W_1 + W_2) = \dim W_1 + \dim W_2 - \dim (W_1 \cap W_2).$$
