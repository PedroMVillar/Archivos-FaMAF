---
header: Final 21-12-2023 - Solución
paginate: "true"
Materia: Álgebra
footer: https://github.com/PedroMVillar/Algebra-Lineal-Archives
---
# Ejercicio 1
Sea $\mathbb{k}$ un cuerpo y $V$ un $\mathbb{k}$-espacio vectorial.
- (a) *(5 pts.).* Sean $v_1,...,v_n$ vectores en $V$. Dar la definición del subespacio vectorial $\langle v_1,..., v_n \rangle$.
- (b) *(5 pts.).* Sean $v,w \in V$ y $\lambda \in \mathbb{k}$. Demostrar que
$$
\langle v,w \rangle = \langle v, \lambda v +w \rangle.
$$
- (c) *(5 pts.).* Sean $v,w,u \in V$. Demostrar que si $\{ v,w,u \}$ es un conjunto $LI$ entonces
$$
\langle v,w \rangle \neq \langle v,u \rangle
$$
- (d) *(5 pts.).* Calcular la dimensión del subespacio vectorial de $\mathbb{R}^4$.
$$
W = \langle (1, 0, 1, 0), (-1, 1, 0, 1), (0, 1, 1, 1), (-1, 1, 0, 1) \rangle 
$$
---
## Punto a
Sea $V$ un espacio vectorial sobre $K$ y sean $v_1,\ldots,v_n \in V$. Al  subespacio vectorial $W = \{\lambda_1v_1+\cdots+\lambda_kv_k: \lambda_1,\ldots,\lambda_n \in K \}$ de las combinaciones lineales de $v_1,\ldots,v_n$ se lo denomina *subespacio generado por $v_1,\ldots,v_n$* y se lo denota  
$$\begin{align*} W &=& \langle v_1,\ldots,v_n \rangle, &\quad \text{ o } \\ W &=&  \operatorname{gen}\left\{ v_1,\ldots,v_n\right\} &\quad \text{ o } \\ W &=&  \operatorname{span}\left\{ v_1,\ldots,v_n\right\}.&\end{align*}$$

---
## Punto b

Hay que probar lo siguiente:
$$
\left \langle v_1,v_2 \right \rangle =\left \langle v_1,v_2 + \lambda v_1 \right \rangle
$$
Por un lado se tiene que existen escalares $\lambda_1,\lambda_2\in K$ tal que $v=\lambda_1v_1+\lambda_2v_2$ y por otro se tiene que existen escalares $\lambda'_1,\lambda'_2\in K$ tal que $v'=\lambda'_1v_1+\lambda'_2\cdot(v_2 + \lambda v_1)$ reescribiendo la ecuación:
$$
v'=\lambda'_1v_1+\lambda'_2\cdot(v_2 + \lambda v_1) = \lambda'_1v_1+\lambda'_2\cdot v_2 + \lambda'_2\cdot\lambda v_1 = (\lambda'_1+\lambda'_2)\cdot v_1+\lambda'_2\cdot v_2
$$
Por lo tanto, se prueba que un elemento de $\left \langle v_1,v_2 + \lambda v_1 \right \rangle$ pertenece a $\left \langle v_1,v_2 \right \rangle$. Análogamente se prueba que un elemento de $\left \langle v_1,v_2 \right \rangle$ pertenece a $\left \langle v_1,v_2 + \lambda v_1 \right \rangle$. Ambos se pueden escribir como combinación lineal de $v_1$ y $v_2$, por lo tanto queda demostrada la afirmación.

---
## Punto c
Supongamos que $\langle v, w\rangle = \langle v, u\rangle$, entonces un vector del primer subespacio $s = \lambda_1v+\lambda_2w$ también puede escribirse como $\lambda_3v+\lambda_4u$, y se podría igualar:
$$
\begin{align*}
\lambda_1v+\lambda_2w &= \lambda_3v+\lambda_4u \\
\lambda_1v+\lambda_2w - \lambda_3v &= \lambda_4u \\
(\lambda_1-\lambda_3)v +\lambda_2w &= \lambda_4u \\
\frac{(\lambda_1-\lambda_3)v}{\lambda_4}+\frac{\lambda_2w}{\lambda_4} &= u \\
\frac{\lambda_1-\lambda_3}{\lambda_4}v+\frac{\lambda_2}{\lambda_4}w &= u
\end{align*} 
$$


Esto quiere decir que $u$ se puede escribir como combinación lineal de $v$ y $w$, y esto contradice que el conjunto sea $LI$, por lo tanto se probó por contradicción o absurdo que si $\{v,w,u\}$ es un conjunto $LI$, entonces $\langle v, w\rangle \neq \langle v, u\rangle$.

---
## Punto d
Para ver la dimensión del subespacio de $R^4$, primero planteo la matriz y reduzco para encontrar si es que existe, algún vector que sea combinación lineal del resto:
$$
\begin{bmatrix}
1 & 0 & 1 & 0 \\
−1 & 1 & 0 & 1 \\
0 & 1 & 1 & 1 \\
−1 & 1 & 0 & 1
\end{bmatrix} \sim
\begin{bmatrix}
1 & 0 & 1 & 0 \\
0 & 1 & 1 & 1 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Esto quiere decir que la dimensión del subespacio es $2$ y puede escribirse como 
$$W= \langle (1,0,1,0),(0,1,1,1) \rangle$$


---
# Ejercicio 2
Sean $a, b, c, d, e, f ∈ R$ con $a, d, f$ no nulos y sea $U$ la matriz triangular superior
$$ U =
\begin{bmatrix}
a & b & c \\
0 & d & e \\
0 & 0 & f
\end{bmatrix}
$$
- (a) *(5 pts.)* Encontrar la inversa de $U$.
- (b) *(5 pts)*. Demostrar que si las columnas de $U$ son autovectores de una matriz $A ∈ M_3(\mathbb{R})$, entonces $A$ es triangular superior.

---
## Punto a
Para hallar la inversa utilizo la matriz adjunta:
(Sea $A  \in M_n(K)$, llamaremos **matriz adjunta** de **$A$** a la matriz $adj(A)=[C_{ij}]^T$ donde $C_{ij}$ es el cofactor de lugar $(i,j)$)
$$
adj\left (\begin{bmatrix}
a & b & c \\
0 & d & e \\
0 & 0 & f
\end{bmatrix} \right ) = \begin{bmatrix}
C_{11} & C_{12} & C_{13} \\
C_{21} & C_{22} & C_{23} \\
C_{31} & C_{32} & C_{33}
\end{bmatrix} = 
\begin{bmatrix} 
df & -bf & be - cd \\
0 & af & -ea \\
0 & 0 & ad
\end{bmatrix}
$$

---
Ahora aplico la fórmula que permite calcular la inversa 
$$
\begin{align*}
\frac{1}{det(U)}adj(U) &= U^{-1} \\ 
\\
\frac{1}{adf}\cdot \begin{bmatrix} 
df & -bf & be - cd \\
0 & af & -ea \\
0 & 0 & ad
\end{bmatrix} &= U^{-1}
\end{align*}
$$
---

Y por lo tanto
$$
U^{-1} = 
\begin{bmatrix} 
\frac{1}{a} & \frac{-b}{ad} & \frac{be - cd}{adf} \\
0 & \frac{1}{d} & \frac{-e}{df} \\
0 & 0 & \frac{1}{f}
\end{bmatrix}
$$


---
# Ejercicio 3
Sean $a, b ∈ {R}$ y sean L1 y L2 las rectas en $\mathbb{R}^3$ dadas por
$$
L_1 = \{ t(a, 1, 1) + (2, 1, 0) : t ∈ \mathbb{R} \},
$$
$$
L_2 = \{ s(1, 0, b) + (1, 1, -1) : s ∈ \mathbb{R} \}.
$$
- (a) *(5 pts.)* Determinar todos los pares $(a, b) ∈ \mathbb{R}^2$ tales que la intersección $L1 ∩ L2$ posee exactamente un punto.
- (b) *(5 pts.)* Determinar todos los pares $(a, b) ∈ \mathbb{R}^2$ tales que la intersección $L1 ∩ L2$ es el conjunto vacío.


---

Primero voy a expresar las rectas $L1$ y $L2$ en forma implícita para poder armar los sistemas de ecuaciones:
**Recta $L1$**
$$
\begin{align*}
t(a,1,1) + (2,1,0) &= (ta, t,t) + (2,1,0) \\
&= (ta + 2, t+1, t)
\end{align*}
$$
De acá se puede igualar a un vector genérico $(x,y,z)$ y se obtiene que: $x = ta+2, \ y = t+1$ y $z = t$ , despejando $t$ de cada ecuación: $t = \frac{x-2}{a}, \ t = y-1$ y $t = z$, ahora se pueden igualar para eliminar el parámetro $t$
$$
\begin{align*}
\frac{x-2}{a} &= y-1 = z \\
x-2 &= ay -a = za 
\end{align*}
$$

---
Igualando primero la primera con la última ecuación
$$
\begin{align*}
\frac{x-2}{a} &=  z \\
x-2 &=  za \\
x - za &= 2
\end{align*}
$$
Luego igualando la primera con la segunda ecuación
$$
\begin{align*}
\frac{x-2}{a} &= y-1 \\
x-2 &= ay -a \\
x -ay &= 2-a 
\end{align*}
$$
---

Entonces la recta queda definida como:
$$
\begin{cases}
x-za = 2 \\
x- ay = 2-a
\end{cases}
$$

---
**Recta $L2$**
$$
\begin{align*}
s(1,0,b) + (1,1,-1) &= (s, 0,sb) + (1,1,-1) \\
&= (s+1, 1, sb -1)
\end{align*}
$$
De acá se puede igualar a un vector genérico $(x,y,z)$ y se obtiene que: $x = s+1, \ y = 1$ y $z = sb-1$ , despejando $s$ de cada ecuación: $s = x-1, \ y = 1$ y $s = \frac{z+1}{b}$, ahora se pueden igualar para eliminar el parámetro $s$:
$$
\begin{align*}
x-1 &= \frac{z+1}{b}  \\
bx - b &= z+1 \\
bx - z &= 1 + b \\ 
\end{align*}
$$
---
Pero como $y=1$, entonces la forma implícita es:
$$
\begin{cases}
bx - z = 1+b \\
y = 1
\end{cases}
$$

---
## Punto a y b 

Planteo la intersección con un sistema de ecuaciones:
$$
\begin{cases}
x-za = 2 \\
x- ay = 2-a \\
bx - z = 1+b \\
y = 1
\end{cases}
$$

---

Lo paso a matriz y reduzco:
$$
\begin{align*}
\begin{bmatrix}
1 & 0 & -a & 2 \\
1 & -a & 0 & -a+2 \\
b & 0 & -1 & b+1 \\
0 & 1 & 0 & 1 
\end{bmatrix} &\xrightarrow{f_2-f_1}
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & -a & a & -a \\
b & 0 & -1 & b+1 \\
0 & 1 & 0 & 1 
\end{bmatrix} \xrightarrow{f_3-bf_1}
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & -a & a & -a \\
0 & 0 & ab-1 & -b+1 \\
0 & 1 & 0 & 1 
\end{bmatrix} \\ &\xrightarrow{f_4<->f_2}
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & -a & a & -a
\end{bmatrix} \xrightarrow{f_4+ af_2}
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & 0 & a & 0
\end{bmatrix} 
\end{align*}
$$
---

Acá es necesario separar en dos casos principales:


1. Si $a⁢b−1≠0$:
$$
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & 0 & a & 0 
\end{bmatrix} \xrightarrow{f_4 - \frac{a}{ab-1}f_3}
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & 0 & 0 & \frac{-a+ab}{ab-1} 
\end{bmatrix}
$$
Ahora salen dos casos mas:

---

- Si $a≠0,b≠1$ (si $b$ fuese 1, la tercera fila quedaría $ab-1 = 0$ y como $ab-1 \neq 0$, seria un absurdo y se está buscando analizar la última fila.):
$$
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & 0 & 0 & \frac{-a+ab}{ab-1} 
\end{bmatrix}
$$
El sistema es:
$$
\begin{cases}
x = \frac{a+ab-2}{ab-1} \\
y = 1 \\
z = \frac{-b+1}{ab-1} \\
0 = \frac{-a+ab}{ab-1} 
\end{cases}
$$
no existe solución, ya que $\frac{-a+ab}{ab-1} \neq 0$ y por lo tanto se llega a una igualdad incorrecta.

---
- Si $-a+ab=0,a≠1,b\neq 1$: 

$$
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & 0 & 0 & \frac{-a+ab}{ab-1} 
\end{bmatrix} \sim
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
El sistema es:
$$
\begin{cases}
x - az = 2 \\
y = 1 \\
(ab-1)z = -b+1
\end{cases}
$$


---
De la tercera ecuación sale que $z = \frac{-b+1}{ab-1}$ y de la primera ecuación se tiene que $x = 2+az$ reemplazo $z$, $x =2+a\frac{-b+1}{ab-1} = \frac{a+ab-2}{ab-1}$, entonces la solución única es:
$$
\begin{cases}
x = \frac{a+ab-2}{ab-1} \\
y = 1 \\
z = \frac{-b+1}{ab-1}
\end{cases}
$$



2. Si $a⁢b−1=0$:
$$
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & ab-1 & -b+1 \\
0 & 0 & a & 0 
\end{bmatrix} \sim
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & 0 & -b+1 \\
0 & 0 & a & 0
\end{bmatrix} \xrightarrow{f_4 <-> f_3}
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & a & 0 \\
0 & 0 & 0 & -b+1
\end{bmatrix}
$$
---
De acá salen dos casos mas:


- Si $a⁢b−1=0,b≠1$ no existe solución:
$$
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & a & 0 \\
0 & 0 & 0 & -b+1
\end{bmatrix}
$$
El sistema es:
$$
\begin{cases}
x - az = 2 \\
y = 1 \\
az = 0 \\
0 = -b+1
\end{cases}
$$
---

Se llega a una igualdad incorrecta, por lo tanto el sistema no tiene solución.



- Si $a=1,b=1$, hay solución única:
$$
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & a & 0 \\
0 & 0 & 0 & -b + 1
\end{bmatrix} \sim
\begin{bmatrix}
1 & 0 & -a & 2 \\
0 & 1 & 0 & 1 \\
0 & 0 & a & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
El sistema es:
$$
\begin{cases}
x - az = 2 \\
y = 1 \\
az = 0
\end{cases}
$$


---

De la tercera ecuación sale que $z=0$ después reemplazando en la primera, $x=2$ y por lo tanto la solución es:
$$
\begin{cases}
x = 2 \\
y = 1 \\
z=0 
\end{cases}
$$


Entonces, el conjunto de pares $(a,b)$ para los cuales $L_1 \cap L_2$ posee exactamente un punto es: 
$$
\{ (a,b) : ab-1 \neq 0 \land (a - ab = 0 \land a \neq 1) \lor (a = 1 \land b = 1) \}
$$
,y el conjunto para los cuales el conjunto es vacío es 
$$
\{ (a,b) : (ab-1 \neq 0 \ \wedge \ a\neq 0 \ \wedge \ b \neq 1) \vee (ab-1 = 0 \ \wedge \ b \neq 1) \}
$$
---
# Ejercicio 4
Sean $\mathbb{B} = \{ 1, x, x2, x3 + x \}$ base de $\mathbb{R}_4[x]$ y sea $\mathcal{C} = \{ (1, 0), (0, 1) \}$ la base canónica de $\mathbb{R}^2$. Sea $T : \mathbb{R}_4[x] → \mathbb{R}^2$ una transformación lineal tal que
$$
[T]_{\mathcal{BC}} = \begin{bmatrix} 0 & -1 & 1 & 1 \\ -1 & 2 & 0 & 0 \end{bmatrix}
$$
- (a) *(5 pts.)* Calcular la dimensión del núcleo de T . 
- (b) *(5 pts.)* Decidir si T es suryectiva. Justificar.

---
Como
$$
[T]_{\mathcal{BC}} = \begin{bmatrix} 0 & -1 & 1 & 1 \\ -1 & 2 &0 & 0 \end{bmatrix}
$$

Entonces se puede afirmar que:
- $T(1) = (0,1)$
- $T(x) = (-1,2)$
- $T(x^2) = (1,0)$
- $T(x^3+x) = (1,0)$

---
Primero voy a obtener $T(ax^3+bx^2+cx+d)$ para luego calcular el núcleo. Como $\mathcal{B}$ genera a $\mathbb{R}_4[x]$, quiere decir que a $ax^3+bx^2+cx+d$ se lo puede escribir como combinación lineal de los elementos de la base $\mathcal{B}$:
$$
\begin{align*}
ax^3+bx^2+cx+d &= \lambda_1 1 + \lambda_2 x + \lambda_3 x^2 + \lambda_4(x^3+x) \\
&= \lambda_1 + \lambda_2 x + \lambda_3 x^2 + \lambda_4 x^3 + \lambda_4 x \\
&= \lambda_4 x^3 + \lambda_3 x^2 + (\lambda_2 + \lambda_4)x + \lambda_1
\end{align*}
$$
---

Como la igualdad de polinomios es una igualdad coeficientes a coeficientes, se forma el siguiente sistema de ecuaciones:
$$
\begin{cases}
a = \lambda_4 \\
b = \lambda_3 \\
c = \lambda_2 + \lambda_4 \\
d = \lambda_1
\end{cases}
$$


De la tercera ecuación sale que $\lambda_2 = c-a$, y entonces:
$$
ax^3+bx^2+cx+d = d 1 + (c-a)x + bx^2+a(x^3+x)
$$
---

Aplico transformación lineal de cada lado:
$$
\begin{align*}
ax^3+bx^2+cx+d &= d 1 + (c-a)x + bx^2+a(x^3+x) \\
T(ax^3+bx^2+cx+d) &= T(d 1 + (c-a)x + bx^2+a(x^3+x)) \\
 &= T(d1) + T((c-a)x) + T(bx^2) + T(a(x^3+x)) \\
 &= dT(1) + (c-a)T(x) + bT(x^2) + aT(x^3+x) 
\end{align*}
$$

---
Pero los valores de la trasformación lineal aplicada a cada elemento de la base se tienen:
$$
\begin{align*}
T(ax^3+bx^2+cx+d) &= dT(1) + (c-a)T(x) + bT(x^2) + aT(x^3+x)  \\
&= d(0,1) + (c-a)(-1,2) + b(1,0) + a(1,0) \\
&= (0,d) + (a-c, 2c-2a) + (b,0) + (a,0) \\
&= (2a+b-c, d+2c-2a)
\end{align*}
$$
---
## Punto a

El núcleo por definición son todos los polinomios $ax^3+bx^2+cx+d$ tal que $T(ax^3+bx^2+cx+d) = (0,0)$, como la transformación ya está definida, se arma el sistema:
$$
\begin{cases}
2a+b-c = 0 \\
d+2c-2a = 0
\end{cases}
$$
Lo paso a matriz para simplificar un poco:
$$
\begin{bmatrix}
2 & 1 & -1 & 0 \\
-2 & 0 & 2 & 1
\end{bmatrix} \xrightarrow{f_2+f_1}
\begin{bmatrix}
2 & 1 & -1 & 0 \\
0 & 1 & 1 & 1
\end{bmatrix}
$$
Y el sistema queda
$$
\begin{cases}
2a+b-c = 0 \\
b = -c-d
\end{cases}
$$
---

Reemplazando $b$ en la primera ecuación $2a = -(-c-d) + c = 2c+d$ entonces $a = c + \frac{1}{2}d$ ahora queda todo en función de $c$ y $d$, se puede definir al núcleo como:
$$
Nu(T) =  \left \{  (c+\frac{1}{2}d) x^3 + (-c-d)x^2+cx+d : c,d \in \mathbb{R}  \right \}
$$
Para saber la dimensión del núcleo, se tiene que un vector en dicho conjunto es de la forma: $(c+\frac{1}{2}d) x^3 + (-c-d)x^2+cx+d$ que es lo mismo que $cx^3+\frac{1}{2}dx^3-cx^2-dx^2+cx+d$ ahora tomando como factor común las variables libres: $c(x^3-x^2+x)+d(\frac{1}{2}x^3-x^2+1)$ se tiene que una base del núcleo es $\{ x^3-x^2+x, \frac{1}{2}x^3-x^2+1 \}$ y la dimensión es la cantidad de vectores en la base, es decir $dim(Nu(T)) = 2$.

---
Como ejemplo se puede tomar al vector $v = 0\cdot(x^3-x^2+x) + 1\cdot(\frac{1}{2}x^3-x^2+1)$ y al aplicarle transformación lineal:
$$
T(\frac{1}{2}x^3-x^2+1) = \left ( 2\frac{1}{2}-1, 1-2\frac{1}{2} \right ) = (0,0)
$$
*$v$ pertenece al núcleo.*

---
## Punto b

Por teorema de la dimensiones, $dim(\mathbb{R}_4[x]) = dim(Im(T)) + dim(Nu(T))$ se tienen las dimensiones del espacio de salida y del núcleo: 
$$
\begin{align*}
dim(\mathbb{R}_4[x]) &= dim(Im(T)) + dim(Nu(T)) \\
4 &= dim(Im(T)) + 2 \\
dim(Im(T)) &= 4 - 2 = 2 
\end{align*}
$$
Como el $rango$ de $T$ equivale a la dimensión del conjunto de llegada, es decir $rango(T)=dim(\mathbb{R}^2)$, entonces $T$ es un epimorfismo, esto quiere decir que es suryectiva.

---

# Ejercicio 5

Sea $T : M_2(\mathbb{R}) → M_2(\mathbb{R})$ la transformación lineal definida por
$$
T \left (  \begin{bmatrix} x & y \\ z & w \end{bmatrix} \right ) = 
\begin{bmatrix}
x − 2y & 2x − 4y \\
z + 3w & 2z + 6w
\end{bmatrix}
$$
- (a) *(5 pts.)* Decidir si la matriz $\begin{bmatrix} 1 & 2 \\ 3 & 6 \end{bmatrix}$ pertenece a $Im T$ . Justificar. 
- (b) *(10 pts.)* Calcular los autovalores reales de $T$. 
- (c) *(10 pts.)* Calcular los autoespacios de los autovalores calculados en el punto anterior. 
- (d) *(5 pts.)* Decidir si T es diagonalizable.

---

Primero voy a sacar una base de la imagen, un vector genérico de salida es de la forma 
$$
\begin{bmatrix}
x- 2y & 2x-4y \\
z+3w & 2z+6w
\end{bmatrix}
$$
que es lo mismo que
$$
x \begin{bmatrix}
1 & 2 \\
0 & 0
\end{bmatrix}+
y \begin{bmatrix}
-2 & -4 \\
0 & 0
\end{bmatrix} + 
z \begin{bmatrix}
0 & 0 \\
1 & 2
\end{bmatrix} + 
w \begin{bmatrix}
0 & 0 \\
3 & 6
\end{bmatrix}
$$
A simple viste se puede notar que $\begin{bmatrix} -2 & -4 \\ 0 & 0 \end{bmatrix}= (-2) \begin{bmatrix} 1 & 2 \\ 0 & 0 \end{bmatrix}$ y $\begin{bmatrix} 0 & 0 \\ 3 & 6 \end{bmatrix} = 2 \begin{bmatrix} 0 & 0 \\ 1 & 2 \end{bmatrix}$ por lo tanto una base correcta de la imagen es:
$$
\left \{  \begin{bmatrix} 1 & 2 \\ 0 & 0 \end{bmatrix}, \begin{bmatrix} 0 & 0 \\ 1 & 2 \end{bmatrix}  \right \}
$$


---
## Punto a

Para verificar si la matriz $\begin{bmatrix} 1 & 2 \\ 3 & 6 \end{bmatrix}$ pertenece a la imagen, hay que ver si se puede escribir como combinación lineal de los elementos de la base de la imagen, a simple vista se puede ver que:
$$
\begin{bmatrix} 1 & 2 \\ 3 & 6 \end{bmatrix} = 1 \begin{bmatrix} 1 & 2 \\ 0 & 0 \end{bmatrix} + 3 \begin{bmatrix} 0 & 0 \\ 1 & 2 \end{bmatrix}
$$
Por lo tanto, el vector sí pertenece a la imagen.

---

## Punto b

Para obtener los autovalores reales de $T$ primero hay que hallar la matriz de $T$, para ello tomo la base canónica de $M_2(\mathbb{R})$ y le aplico $T$ para formarla:
- $T \left(  \begin{bmatrix} 1 & 0 \\ 0 & 0 \end{bmatrix} \right ) = \begin{bmatrix} 1 & 2 \\ 0 & 0 \end{bmatrix}$
- $T \left(  \begin{bmatrix} 0 & 1 \\ 0 & 0 \end{bmatrix} \right ) = \begin{bmatrix} -2 & -4 \\ 0 & 0 \end{bmatrix}$
- $T \left(  \begin{bmatrix} 0 & 0 \\ 1 & 0 \end{bmatrix} \right ) = \begin{bmatrix} 0 & 0 \\ 1 & 2 \end{bmatrix}$
- $T \left(  \begin{bmatrix} 0 & 0 \\ 0 & 1 \end{bmatrix} \right ) = \begin{bmatrix} 0 & 0 \\ 3 & 6 \end{bmatrix}$

---

Luego los expreso en función de la base canónica para obtener los vectores coordenada y posiciono cada vector como columna de una matriz:
- $\left [ T \left(  \begin{bmatrix} 1 & 0 \\ 0 & 0 \end{bmatrix} \right ) \right ]_{\mathcal{C}} = \begin{bmatrix} 1 \\ 2 \\ 0 \\ 0 \end{bmatrix}$
- $\left [ T \left(  \begin{bmatrix} 0 & 0 \\ 1 & 0 \end{bmatrix} \right ) \right ]_{\mathcal{C}} = \begin{bmatrix} -2 \\ -4 \\ 0 \\ 0 \end{bmatrix}$
---
- $\left [ T \left(  \begin{bmatrix} 0 & 0 \\ 1 & 0 \end{bmatrix} \right ) \right ]_{\mathcal{C}} = \begin{bmatrix} 0 \\ 0 \\ 1 \\ 2 \end{bmatrix}$
- $\left [ T \left(  \begin{bmatrix} 0 & 0 \\ 0 & 1 \end{bmatrix} \right ) \right ]_{\mathcal{C}} = \begin{bmatrix} 0 \\ 0 \\ 3 \\ 6 \end{bmatrix}$

---


$$
A = \begin{bmatrix}
1 & -2 & 0 & 0 \\
2 & -4 & 0 & 0 \\
0 & 0 & 1 & 3 \\
0 & 0 & 2 & 6
\end{bmatrix}
$$

---

Para hallar los autovalores reales, se plantea el polinomio característico
$$
\begin{align*}
\chi(x) = det(A-xId ) = \begin{vmatrix}
1-x & -2 & 0 & 0 \\
2 & -4-x & 0 & 0 \\
0 & 0 & 1-x & 3 \\
0 & 0 & 2 & 6-x
\end{vmatrix} 
\end{align*}
$$
Reduzco la matriz para que queda mas fácil de operar:
$$
\begin{bmatrix}
1-x & -2 & 0 & 0 \\
2 & -4-x & 0 & 0 \\
0 & 0 & 1-x & 3 \\
0 & 0 & 2 & 6-x
\end{bmatrix} \xrightarrow{c_1 - \frac{x-1}{2}c_2}
\begin{bmatrix}
0 & -2 & 0 & 0 \\
\frac{x(x+3)}{2} & -4-x & 0 & 0 \\
0 & 0 & 1-x & 3 \\
0 & 0 & 2 & 6-x
\end{bmatrix}
$$

---

Ahora calculo el determinante de la matriz resultante expandiendo por la fila 1:
$$
\begin{align*}
\begin{vmatrix}
0 & -2 & 0 & 0 \\
\frac{x(x+3)}{2} & -4-x & 0 & 0 \\
0 & 0 & 1-x & 3 \\
0 & 0 & 2 & 6-x
\end{vmatrix} &= - (-2) \begin{vmatrix}
\frac{x(x+3)}{2} &  0 & 0 \\
0 &  1-x & 3 \\
0 &  2 & 6-x
\end{vmatrix} = 2 \cdot \frac{x(x+3)}{2} 
\begin{vmatrix}
1-x & 3 \\
2 & 6-x
\end{vmatrix} \\
&= 2 \cdot \frac{x(x+3)}{2} ((1-x)(6-x)-6) = x(x+3)(x^2-7x) \\
&= x^2(x+3)(x-7)
\end{align*}
$$
Las raíces del polinomio característico, los autovalores reales son: $0,-3,7$.


---
## Punto c

Ahora para encontrar los autoespacios de los autovalores del punto anterior, hay que resolver los siguientes sistemas:

1. Con $x = 0$
$$
\begin{bmatrix}
1 & -2 & 0 & 0 \\
2 & -4 & 0 & 0 \\
0 & 0 & 1 & 3 \\
0 & 0 & 2 & 6
\end{bmatrix} 
\begin{bmatrix}
x  \\
y  \\
z  \\
w 
\end{bmatrix} =
\begin{bmatrix}
0  \\
0  \\
0  \\
0 
\end{bmatrix} 
$$ 
---

Para ello reduzco primero la matriz
$$
\begin{bmatrix}
1 & -2 & 0 & 0 \\
2 & -4 & 0 & 0 \\
0 & 0 & 1 & 3 \\
0 & 0 & 2 & 6
\end{bmatrix} \xrightarrow{f_2-2f_1}
\begin{bmatrix}
1 & -2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 3 \\
0 & 0 & 2 & 6
\end{bmatrix} \xrightarrow{f_4-2f_3}
\begin{bmatrix}
1 & -2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 3 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
De acá salen las ecuaciones: $x-2y = 0$ y $z+3w = 0$, de la primera ecuación $x = 2y$ y de la segunda $z = -3w$, por lo tanto las soluciones son de la forma $(2y,y,-3w,w)$ y los dos autovectores asociados al autovalor 0 son $(2,1,0,0)$ y $(0,0,-3,1)$, el autoespacio correspondiente es $V_0 = \langle (2,1,0,0), (0,0,-3,1) \rangle$.

---

2. Con $x=-3$
$$
\begin{bmatrix}
4 & -2 & 0 & 0 \\
2 & -1 & 0 & 0 \\
0 & 0 & 4 & 3 \\
0 & 0 & 2 & 9
\end{bmatrix} 
\begin{bmatrix}
x  \\
y  \\
z  \\
w 
\end{bmatrix} =
\begin{bmatrix}
0  \\
0  \\
0  \\
0 
\end{bmatrix} 
$$
Para ello reduzco primero la matriz
$$
\begin{align*}
\begin{bmatrix}
4 & -2 & 0 & 0 \\
2 & -1 & 0 & 0 \\
0 & 0 & 4 & 3 \\
0 & 0 & 2 & 9
\end{bmatrix} &\xrightarrow{f_2-f_1/2}
\begin{bmatrix}
4 & -2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 4 & 3 \\
0 & 0 & 2 & 9
\end{bmatrix} \xrightarrow{f_1 /4}
\begin{bmatrix}
1 & -1/2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 4 & 3 \\
0 & 0 & 2 & 9
\end{bmatrix} \xrightarrow{f_4 -f_3/2}
\begin{bmatrix}
1 & -1/2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 4 & 3 \\
0 & 0 & 0 & 15/2
\end{bmatrix} \\ &\xrightarrow{f_3 \cdot 2/15}
\begin{bmatrix}
1 & -1/2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 4 & 3 \\
0 & 0 & 0 & 1
\end{bmatrix} \xrightarrow{f_3-3f_4}
\begin{bmatrix}
1 & -1/2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 4 & 0 \\
0 & 0 & 0 & 1
\end{bmatrix}\xrightarrow{f_3/4}
\begin{bmatrix}
1 & -1/2 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1
\end{bmatrix}

\end{align*}
$$

---



De acá salen las ecuaciones: $x-1/2y = 0$, $z = 0$ y $w=0$, entonces $x=1/2y$, las soluciones son de la forma $(1/2y,y,0,0)$ , el vector asociado es $(1/2,1,0,0)$ y el autoespacio es $V_3 = \langle (1/2,1,0,0) \rangle$.

---

3. Con $x=7$
$$
\begin{bmatrix}
-6 & -2 & 0 & 0 \\
2 & -11 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 2 & -1
\end{bmatrix} 
\begin{bmatrix}
x  \\
y  \\
z  \\
w 
\end{bmatrix} =
\begin{bmatrix}
0  \\
0  \\
0  \\
0 
\end{bmatrix} 
$$
Para ello reduzco primero la matriz
$$
\begin{align*}
\begin{bmatrix}
-6 & -2 & 0 & 0 \\
2 & -11 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 2 & -1
\end{bmatrix} &\xrightarrow{f_2<-> f_1}
\begin{bmatrix}
2 & -11 & 0 & 0 \\
-6 & -2 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 2 & -1
\end{bmatrix} \xrightarrow{f_2 + 3f_1}
\begin{bmatrix}
2 & -11 & 0 & 0 \\
0 & -35 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 2 & -1
\end{bmatrix} \xrightarrow{f_2 (-1/35)}
\begin{bmatrix}
2 & -11 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 2 & -1
\end{bmatrix} \\ &\xrightarrow{f_1 + 11f_2} 
\begin{bmatrix}
2 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 2 & -1
\end{bmatrix} \xrightarrow{f_1/2}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 2 & -1
\end{bmatrix} \xrightarrow{f_4 + f_3/3}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & -6 & 3 \\
0 & 0 & 0 & 0
\end{bmatrix} \xrightarrow{-f_3/6}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & -1/2 \\
0 & 0 & 0 & 0
\end{bmatrix}
\end{align*}
$$

---

De acá salen las ecuaciones: $x = 0$, $y=0$, $z - 1/2w = 0$, entonces $z=1/2w$, las soluciones son de la forma $(0,0,1/2w,w)$, el vector asociado es $(0,0,1/2,1)$ y el autoespacio es $V_7=\langle (0,0,1/2,1) \rangle$.


---
## Punto d
Para ver si $T$ es diagonizable, hay que verificar si los autovectores asociados a $T$ forman una base de $M_2(\mathbb{R})$, para ello veo si son linealmente independientes:
Si los vectores son linealmente independientes, la única solución a esta ecuación es la trivial:
$$
\lambda_1 (2,1,0,0) + \lambda_2 (0,0,-3,1) + \lambda_3 (1/2,1,0,0) + \lambda_4 (0,0,1/2,1)
$$


---
Se forma el siguiente sistema de ecuaciones representado por la matriz
$$
\begin{bmatrix}
2 & 1 & 0 & 0  \\
0 & 0 & -3 & 1 \\
1/2 & 1 & 0 & 0 \\
0 & 0 & 1/2 & 1
\end{bmatrix} \sim
\begin{bmatrix}
1 &0 & 0 & 0  \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1
\end{bmatrix}
$$
Como la única solución es la trivial, el conjunto es linealmente independiente y por lo tanto es base. Esto prueba que $T$ es diagonizable.

---

# Ejercicio 6
*(10 pts.)* Decidir si existe una transformación lineal $T : \mathbb{R}^3 → \mathbb{R}^3$ tal que $Nu T = ⟨(1, 0, −1)⟩$ y $Nu T ⊂ Im T$ . ¿Existe una única transformación lineal que satisfaga las propiedades anteriores?

---

Por definición el núcleo de una transformación lineal está contenido en la imagen de dicha transformación, pero sin embargo, existen infinitas transformaciones lineales que pueden tener el mismo núcleo. **Entonces existen infinitas transformaciones lineales que satisfacen las propiedades dadas**.

---
# Ejercicio 7
Sea $\mathbb{k}$ un cuerpo. Consideramos el $\mathbb{k}$-espacio vectorial $\mathbb{k}_n[x]$
- (a) *(5 pts. )* Demostrar que la función $T : \mathbb{k}_n[x] → \mathbb{k}_n[x]$ dada por $T(p(x)) = p(x − a)$, con $a ∈ \mathbb{k}$, es una transformación lineal biyectiva.
- (b) (5 pts.) Demostrar que el conjunto  $\{ 1, (x − a), (x − a)2, . . . , (x − a)n−1 \}$ es una base de $\mathbb{k}_n[x]$.

---
## Punto a
Para demostrar que $T$ es biyectiva hay que demostrar dos cosas:
1. $T$ es lineal, debemos demostrar que cumple con las dos propiedades de una transformación lineal:


Sea $p(x),q(x)\in \mathbb{k}_n[x]$, entonces
$$
\begin{align*}
T(p(x)+q(x)) &= (p+q)(x-a) = p(x-a) + q(x-a) = T(p(x)) + T(q(x)) \\
T(c\cdot p(x)) &= c\cdot p(x-a) = c\cdot T(p(x))
\end{align*}
$$
Por lo tanto $T$ es lineal.

---
2. $T$ es biyectiva, debemos demostrar que es inyectiva y sobreyectiva.

Para demostrar que $T$ es inyectiva, debemos demostrar que si $T(p(x)) = T(q(x))$, entonces $p(x) = q(x)$, supongamos que $T(p(x)) = T(q(x))$. Entonces, $p(x - a) = q(x - a)$. Si evaluamos ambas funciones en $x + a$, obtenemos:
$$
p(x) = p(x + a - a) = q(x + a - a) = q(x)
$$
Por lo tanto, $T$ es inyectiva.
Para demostrar que $T$ es sobreyectiva, debemos demostrar que para todo $p(x) ∈ \mathbb{k}_n[x]$, existe un $q(x) ∈ \mathbb{k}_n[x]$ tal que $T(q(x)) = p(x)$. Sea $p(x) ∈ \mathbb{k}_n[x]$. Entonces, podemos definir $q(x) = p(x + a)$. Entonces, 
$$ 
T(q(x)) = T(p(x + a)) = p(x + a - a) = p(x).
$$
Por lo tanto, $T$ es sobreyectiva.

---
Como T es inyectiva y sobreyectiva, es biyectiva. Por lo tanto, queda demostrado que $T$ es una transformación lineal biyectiva.

---

## Punto b

Para demostrar que el conjunto $\{1,(x−a),(x−a)2,...,(x−a)n−1\}$ es una base de $\mathbb{k}_n​[x]$, debemos demostrar que es linealmente independiente y que genera $\mathbb{k}_n​[x]$.

Primero, para demostrar que el conjunto es linealmente independiente, debemos demostrar que la única combinación lineal que iguala al vector nulo es la combinación trivial. Sea $c_0​,c_1​,...,c_{n−1}​∈ \mathbb{k}$ tal que:
$$
c_0​+c_1​(x−a)+c_2​(x−a)^2+...+c_{n−1​}(x−a)^{n−1}=0
$$
---
Si evaluamos esta ecuación en $x=a$, obtenemos:
$$c_0 = 0$$
Si tomamos la primera derivada de la ecuación original y la evaluamos en $x=a$, obtenemos:
$$c_1 = 0$$
Si tomamos la segunda derivada de la ecuación original y la evaluamos en $x=a$, obtenemos:
$$2c_2 = 0 \Rightarrow c_2 = 0$$
Continuando de esta manera, podemos demostrar que $c_0​=c_1​=...=c_{n−1}​=0$. Por lo tanto, el conjunto es linealmente independiente, genera y es una base de $\mathbb{k}_n​[x]$.

