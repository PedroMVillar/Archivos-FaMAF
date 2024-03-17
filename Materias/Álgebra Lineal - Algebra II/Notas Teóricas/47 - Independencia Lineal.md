---
Materia: Álgebra
tags:
  - vectores
  - conjunto
  - comb_lineal
---
Sea $V$ un espacio vectorial sobre $K$. Un subconjunto $S$ de $V$ se dice *linealmente dependiente, LD o dependiente* si existen vectores distintos $v_1,\ldots,v_n \in S$  y escalares $\lambda_1,\ldots,\lambda_n$ de $K$, no todos nulos, tales que $$\lambda_1v_1+\cdots+\lambda_nv_n=0.$$Un conjunto que no es linealmente dependiente se dice linealmente independiente (o simplemente), LI o independiente.

### Observación
Por definición, un conjunto $S = \left\{v_1,\ldots,v_n \right\}$ es independiente si se cumple cualquiera de las dos afirmaciones siguientes:
- $\forall\,\lambda_1,\ldots,\lambda_n$ en $K$ tal que $\lambda_i \ne 0$ para algún $i$,  entonces  $\lambda_1v_1+\cdots+\lambda_nv_n\not=0$, o , 
- si $\lambda_1,\ldots,\lambda_n$ en $K$ tales que $\lambda_1v_1+\cdots+\lambda_nv_n=0$,  entonces $0=\lambda_1=\cdots=\lambda_n$.


### Proposición
Las siguientes afirmaciones son consecuencias fácilmente deducibles  de la definición.
- Todo conjunto que contiene un conjunto linealmente dependiente es linealmente dependiente.
- Todo subconjunto de un conjunto linealmente independiente es linealmente independiente.
- Todo conjunto que contiene el vector $0$ es linealmente dependiente; en efecto, $1.0 = 0$.

#### Demostración
Las pruebas salen como consecuencia de las definiciones:
- Sea $L$ un subconjunto *linealmente dependiente*, es decir existen vectores $l_1,l_2,...,l_n\in L$ y escalares $\lambda_1,\lambda_2,...,\lambda_n$ pertenecientes a un cuerpo $K$, no todos nulos, tales que: $\lambda_1l1+\lambda_2l_2+...+\lambda_nl_n=0$. Entonces, si se le agregan vectores con coeficientes 0, el conjunto seguiría siendo LD ya que la combinación lineal seguiría dando 0, con sus escalares no todos nulos.
Supongamos que se tiene un conjunto $V$ LI y un subconjunto $W$ linealmente LD, entonces agregando todos los vectores que faltan para formar el conjunto inicial seguiría siendo LD, y eso es una contradicción, por lo tanto, los subconjuntos que se tomen de un conjunto LI son necesariamente LI.
- Sea $L$ un subconjunto *linealmente dependiente*, es decir existen vectores $l_1,l_2,...,l_n\in L$ y escalares $\lambda_1,\lambda_2,...,\lambda_n$ pertenecientes a un cuerpo $K$, no todos nulos, tales que: $\lambda_1l1+\lambda_2l_2+...+\lambda_nl_n=0$. Entonces, si se le agregan vectores con coeficientes 0, el conjunto seguiría siendo LD ya que la combinación lineal seguiría dando 0, con sus escalares no todos nulos.
Entonces cualquier subconjunto LD de un conjunto mas grande arbitrario, al agregarle los elementos restantes para el conjunto original, seguirá siendo LD, por consecuencia, todo conjunto que contiene a un conjunto LD también será LD.
- Sea $V$ un conjunto con vectores $v_1,v_2,...,v_n,0_v$ con el vector nulo. Va a existir una combinación lineal $0v_1+0v_2+...+0v_n+\lambda0_v=0$ . Es decir, con cualquier $\lambda\in K$ va a existir una combinación lineal que da 0 con no todos los escalares nulos, por lo tanto, el conjunto será LD.


### Observación
En  general,  en $K^m$, si queremos determinar si  $v_1,\ldots,v_n$ es LI, planteamos la ecuación
$$\lambda_1v_1+\cdots+\lambda_nv_n=(0,\ldots,0),$$
que, viéndola coordenada a coordenada, es equivalente a un sistema de $m$ ecuaciones lineales con  $n$ incógnitas (que son $\lambda_1,\ldots,\lambda_n$). Si  la única solución es la trivial entonces $v_1,\ldots,v_n$ es LI. Si hay alguna solución no trivial, entonces $v_1,\ldots,v_n$ es LD.

### Ejemplo
Decidir si los siguientes subconjuntos de $R^3$ son linealmente independientes. Cuando un conjunto no lo sea, mostrar una relación lineal no trivial entre sus elementos.
- **a.** $\{ (1,0,-1),(1,2,1), (0,-3,2) \}$
- **b.** $\{ (1,3,-3),(2,3,-4), (1,-3,1) \}$

*Respuesta*
**a.** Se tiene que para $A\in K^{m\times n}$, las filas $\{f1,\ldots,f_m \}$ de $A$ son vectores de $K^n$ y si $A$ es una matriz escalonada, los vectores son LI, si se anula alguna fila son LD.
Entonces planteo la matriz:
$$ \begin{bmatrix} 1 & 0 & -1\\  1 & 2 & 1\\  0 & -3 & 2  \end{bmatrix} \xrightarrow[]{f_2-f_1} \begin{bmatrix}1 & 0 & -1\\ 0 & 2 & 2\\  0 & -3 & 2  \end{bmatrix} \xrightarrow[]{f_3-(3/2)f_2} \begin{bmatrix} 1 & 0 & -1\\  0 & 2 & 2\\  0 & 0 & 5  \end{bmatrix} $$ Como se llega a una matriz escalonada, los vectores son Linealmente independientes. (Esto se debe a que la matriz formada por los vectores a analizar no es equivalente por filas a una MRF que tenga filas nulas, por lo tanto ningún vector es combinación lineal de los otros).
**b.** Planteo la matriz con los vectores dados:
$$\begin{bmatrix} 1 & 3 & -3\\  2 & 3 & -4\\  1 & -3 & 1  \end{bmatrix} \xrightarrow[]{f_2-2f_1} \begin{bmatrix} 1 & 3 & -3\\  0 & -3 & 2\\  1 & -3 & 1  \end{bmatrix} \xrightarrow[]{f_3-f_1} \begin{bmatrix} 1 & 3 & -3\\  0 & -3 & 2\\  0 & -6 & 4  \end{bmatrix} \xrightarrow[]{f_3+2f_2} \begin{bmatrix} 1 & 3 & -3\\  0 & -3 & 2\\  0 & 0 & 8  \end{bmatrix} $$ Como se llega a una matriz escalonada, los vectores son Linealmente independientes.


