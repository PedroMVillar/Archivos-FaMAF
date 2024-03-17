---
header: Final 06-12-2023 - Solución
paginate: "true"
Materia: Álgebra
footer: https://github.com/PedroMVillar/Algebra-Lineal-Archives
---

# Ejercicio 1
Sea $K$ un cuerpo y $V,W$ $k$-espacios vectoriales.
- (a) *(5 pts.)* Dar la definición de transformación lineal de V a W.
- (b) *(5 pts.)* Si $T : V → W$ es una transformación lineal, demostrar que $T(0) = 0$.
- (c) *(5 pts.)* Sea $k$ un cuerpo y consideramos al $k$-espacio vectorial $M_n(K)$. La función traza: $Tr: M_n(k)\rightarrow k$ está dada por 
 $$Tr(A)= \sum_{i=1}^{n}a_{ii}$$ 
Demostrar que $Tr$ es una transformación lineal.

---

## Punto a
Sean $V$ y $W$ dos espacios vectoriales sobre el cuerpo $K$. Una transformación lineal de $V$ en $W$ es una función $T:V \to W$  tal que
- $T(v+v') = T(v)+ T(v')$, para $v,v' \in V$,
- $T(\lambda v) = \lambda T(v)$, para $v \in V$, $\lambda \in K$.

---

## Punto b

Tomando $v'=0$, por la propiedad del punto a, sabemos que:
$$
T(v+v') = T(v+0) = T(v)+T(0)
$$
como $V,W$ son $k$-espacios vectoriales por hipótesis, $v+o=v$, entonces:
$$
T(v) = T(v)+T(0)
$$

---

## Punto c

Para probar que la función traza es una transformación lineal hay que probar las siguientes afirmaciones:
	-  $tr (A+B) = tr A + tr B,$
	- $tr(\lambda A) = \lambda tr A.$
*Primera prueba*
$$
tr (A+B) = \sum_{i=1}^{n}(a_{ii} + b_{ii}) = \sum_{i=1}^{n}a_{ii} + \sum_{i=1}^{n}b_{ii} = tr A + tr B
$$
*Segunda prueba*
$$
tr(\lambda A) = \sum_{i=1}^{n}\lambda a_{ii} = \lambda \sum_{i=1}^{n}a_{ii} = \lambda tr A
$$
Queda demostrado que **es una transformación lineal**.

---

# Ejercicio 2

Sean $a,b \in R^3$. Sea $P$ el plano cuya ecuación paramétrica es 
$$P =\{ t(1,a,b)+s(a,b,-1)+(1,0,1) : t,s \in R\}.$$
- (a) *(10 pts.)* Sea L la recta dada de forma paramétrica $L = {t(1,1,0)+(0,2,0): t\in R}$. Encontrar todos los $(a,b)\in \mathbb{R}^2$ tales que el plano $P$ es perpendicular a la recta $L$.
- (b) *(5 pts.)* Encontrar todos los $(a,b)\in \mathbb{R}^2$ tal que $(1,1,1)$ no pertenezca a $P$.

---

## Punto a

Para analizar la perpendicularidad puedo analizar en que casos el vector director de la recta $L$ es perpendicular a los vectores que generan a $P$, es decir, debe cumplirse que:
$$
\begin{cases}
 \langle (1,a,b), (1,1,0) \rangle = 0 \\ 
 \langle (a,b,-1), (1,1,0) \rangle = 0 
\end{cases}
$$ 
Esto es lo mismo que
$$
\begin{cases}
 1 + a = 0 \\ 
 a + b = 0 
\end{cases}
$$
De la primera ecuación sale que $a=-1$, luego reemplazando en la segunda, $b= 1$, entonces el conjunto solución es:
$$
Sol = \{ x\cdot (-1,1) : x\in \mathbb{R} \}
$$

---

## Punto b

Para encontrar los valores de $a$ y $b$ tal que no pertenezca dicho punto al plano $P$, veamos en que casos sí pertenece. Los vectores de $P$ son de la forma:
$$
P =\{ t(1,a,b)+s(a,b,-1)+(1,0,1) : t,s \in R\} = \{ (t+as+1, at+bs, bt-s+1) : t,s \in R \}
$$
entonces para que el punto $(1,1,1)$ pertenezca a $P$ se debe cumplir lo siguiente
$$
\begin{cases}
 t + as+1 = 1 \\ 
 at + bs = 1 \\
 bt-s+1 = 1 
\end{cases}
$$
Que es lo mismo que
$$
\begin{cases}
 t + as = 0 \\ 
 at + bs -1 = 0 \\
 bt-s = 0 
\end{cases}
$$

---

Resuelvo el sistema:
$$
\begin{pmatrix}
1 & a & 0\\ 
a & b & -1\\ 
b & -1 & 0
\end{pmatrix}\sim \begin{pmatrix}
1 & a & 0\\ 
0 & -a^2+b & -1\\ 
0 & -ab-1 & 0
\end{pmatrix}
$$
De acá salen dos casos:
- **1.** $a^2-b\neq 0$
$$
\begin{pmatrix}
1 & a & 0\\ 
0 & -a^2+b & -1\\ 
0 & -ab-1 & 0
\end{pmatrix} \sim 
\begin{pmatrix}
1 & a & 0\\ 
0 & -a^2+b & -1\\ 
0 & 0 & \frac{ab+1}{a^2-b}
\end{pmatrix}
$$

---

Salen dos casos nuevos:
	- $ab+1\neq 0, a^2-b\neq 0$ **El sistema no tiene solución**
	- $a\neq 0, ab+1 = 0, a^3+1\neq 0$
	
$$ 
\begin{pmatrix} 1 & a & 0\\ 0 & -a^2+b & -1\\ 0 & 0 & 0\end{pmatrix} 
$$ 
las soluciones son de la forma $t=\frac{-a}{a^2-b}$ y $s=\frac{1}{a^2-b}$

- **2.** $a^2-b = 0$
$$
\begin{pmatrix}
1 & a & 0\\ 
0 & 0 & -1\\ 
0 & 0 & \frac{ab+1}{a^2-b}
\end{pmatrix}
$$
**El sistema no tiene solución**

---

Esto nos dice que el punto $(1,1,1)$ pertenece a $P$ cuando $a\neq 0, ab+1 = 0$, $a^3+1\neq 0$, entonces siempre que $a\ =  0, ab+1 \neq 0, a^3+1= 0$, el punto no pertenecerá a $P$. El conjunto solución es
$$
Sol = \{ (a,b)\in R^2 : a\ =  0, ab+1 \neq 0, a^3+1= 0 \}
$$

---

# Ejercicio 3
*(10 pts.)* Encontrar una matriz $A\in M_{2}(\mathbb{R})$ tal que
$$A^2=-I$$
Si $ϵ \in \mathbb{R}$, $ϵ > 0$. Demostrar que no existe ninguna matriz $B \in M_2(\mathbb{R})$ tal que
$$
B^2 = \begin{bmatrix}
-1 & 0 \\
0 & -1+c
\end{bmatrix}
$$
---

Supongamos que la matriz es de la forma, tal que ocurre 
$$
\begin{bmatrix}
a & b \\
1 & d
\end{bmatrix}^2 = 
\begin{bmatrix}
-1 & 0 \\
0 & -1
\end{bmatrix}
$$
Desarrollo el cuadrado
$$
\begin{bmatrix}
a^2 + b & ab+bd \\
a+d & b+d^2
\end{bmatrix} = 
\begin{bmatrix}
-1 & 0 \\
0 & -1
\end{bmatrix}
$$

---

Entonces se forma el sistema de ecuaciones:
$$
\begin{cases}
a^2 + b = -1 \\
ab + bd = 0 \\
a + d = 0 \\
b + d^2 = -1
\end{cases}
$$
De la primera ecuación sale que $b = -1 - a^2$, luego de la tercera $d=-a$, entonces reemplazo en mi matriz original:
$$
\begin{bmatrix}
a & -1-a^2 \\
1 & -a
\end{bmatrix}^2 = 
\begin{bmatrix}
-1 & 0 \\
0 & -1
\end{bmatrix}
$$

---

Esto es válido para cualquier $a\in \mathbb{R}$, veamos un ejemplo, tomando $a=2$:
$$
\begin{bmatrix}
2 & -1-2^2 \\
1 & -2
\end{bmatrix}^2 = 
\begin{bmatrix}
-1 & 0 \\
0 & -1
\end{bmatrix}
$$
$$
\begin{bmatrix}
2 & -5 \\
1 & -2
\end{bmatrix}^2 = 
\begin{bmatrix}
-1 & 0 \\
0 & -1
\end{bmatrix}
$$

El resultado es correcto, **cumple la propiedad**

---

Para demostrar que no existe ninguna matriz $B \in M_2(\mathbb{R})$ tal que $B^2 = \begin{bmatrix} -1 & 0 \\ 0 & -1+c \end{bmatrix}$, podemos considerar la forma general de una matriz $2 \times 2$ y sus propiedades:

---

Una matriz $B \in M_2(R)$ tiene la forma general:

$$
B = \begin{bmatrix} a & b \\ c & d \end{bmatrix}
$$

donde $a, b, c, d \in R$. Entonces, $B^2$ se calcula como:

$$
B^2 = BB = \begin{bmatrix} a & b \\ c & d \end{bmatrix} \begin{bmatrix} a & b \\ c & d \end{bmatrix} = \begin{bmatrix} a^2+bc & ab+bd \\ ac+dc & bc+d^2 \end{bmatrix}
$$
Para que $B^2 = \begin{bmatrix} -1 & 0 \\ 0 & -1+c \end{bmatrix}$, necesitamos que $a^2+bc = -1$, $ab+bd = 0$, $ac+dc = 0$ y $bc+d^2 = -1+c$.

---

Sin embargo, notamos que $a^2+bc = -1$ implica que $a^2 = -1 - bc$. Como $a, b, c \in R$, el lado derecho de la ecuación es un número real. Pero el lado izquierdo de la ecuación, $a^2$, es siempre no negativo (porque el cuadrado de cualquier número real es no negativo). Por lo tanto, si $bc$ es un número positivo no tiene solución, pero si $bc$ es un número negativo, entonces $-1 - bc$ podría ser no negativo, lo que permitiría soluciones reales para $a$. Analicemos la posibilidad:

---


Si consideramos la ecuación $ab+bd = 0$, esto implica que $b(a+d) = 0$. Por lo tanto, o bien $b = 0$ o bien $a+d = 0$. Si $b = 0$, entonces $bc = 0$, lo que contradice nuestra suposición de que $bc$ es un número negativo. 
Si $a+d = 0$, entonces $d = -a$. Pero entonces, en la ecuación $bc+d^2 = -1+c$, tendríamos $bc + (-a)^2 = -1+c$, lo que implicaría que $bc + a^2 = -1+c$. Pero ya sabemos que $a^2 + bc = -1$, por lo que tendríamos que $-1 = -1+c$, lo que implicaría que $c = 0$. Pero esto también contradice nuestra suposición de que $bc$ es un número negativo. 
Por lo tanto, aún no podemos encontrar una matriz $B$ que satisfaga todas las ecuaciones necesarias.
No existe ninguna matriz $B \in M_2(R)$ tal que $B^2 = \begin{bmatrix} -1 & 0 \\ 0 & -1+c \end{bmatrix}$.

---

# Ejercicio 4

Consideramos la base $\mathcal{B}=\{(1, 0, 0, 0),(0, 1, 0, 0),(0, 1, 1, 0),(0, 1, 1, −1) \}$ de $\mathbb{R}^4$ y la base canónica $\mathcal{C} = \{ (1, 0, 0),(0, 1, 0),(0, 0, 1) \}$ de $\mathbb{R}^3$. Sea $U : \mathbb{R}^3 \to \mathbb{R}^4$ una transformación lineal tal que:
$$[U(x,y,z)]_{\mathcal{B}}=(0,x,y,z)$$
- (a) *(10 pts.)* Calcular $U(x,y,z)$
- (b) *(10 pts.)* Calcular la dimensión de la imagen de U.

---

## Punto a

Dado que $U(x,y,z)$ está expresado como combinación lineal de los vectores de $\mathcal{B}$, podemos escribirlo como:

$$
U(x,y,z) = 0 \cdot (1,0,0,0) + x \cdot (0, 1, 0, 0) + y\cdot (0, 1, 1, 0) + z\cdot (0, 1, 1, −1)
$$
$$
= (0,x+y+z,y+z, -z)
$$

---

## Punto b
Para calcular la imagen de $U$, observamos los posibles vectores $(0,x+y+z,y+z, -z)$ para todos los posibles valores de $x,y,z$. La imagen vive en el espacio de salida, por ello será un subespacio de $\mathbb{R}^4$.
$$
Im(U) = \{ v \in \mathbb{R}^4 : U(x,y,z)= v  \}
$$
$$
\{ (x_0,y_0,z_0,w_0) : U(x,y,z) = (x_0,y_0,z_0,w_0) \}
$$
Pero ya se tiene el dato de $U:(x,y,z)$, por lo tanto
$$
(0,x+y+z,y+z, -z) = (x_0,y_0,z_0,w_0)
$$

---

Se arma el sistema:
$$
\begin{cases}
x_0 = 0 \\
y_0 = x+y+z \\
z_0 = y + z \\
w_0 = -z
\end{cases}
$$
De acá planteo la matriz y resuelvo:
$$
\begin{bmatrix}
0 & 0  & 0  & x_0 \\
1 & 1 & 1 & y_0 \\
0 &1 &1 & z_0 \\
0 &0 &-1 &w_0 
\end{bmatrix} \sim 
\begin{bmatrix}
1 & 1  & 1  & y_0 \\
0 & 1 & 1 & z_0 \\
0 &0 &-1 &w_0 \\
0 &0 &0 &x_0 
\end{bmatrix}
$$

---

Estos nos dice lo siguiente:
$$
Im(u) = \{ (x_0,y_0,z_0,w_0) \in R^4 : x_0 = 0 \}
$$
$$
 = \{ (0,y_0,z_0,w_0) \in R^4 \} = \{ y_0\cdot(0,1,0,0)+z_0\cdot(0,0,1,0)+w_0\cdot(0,0,0,1) \in R^4 : y_0,z_0,w_0\in R \}
$$
Entonces, el conjunto generador de $Im(U)$ es $\langle(0,1,0,0), (0,0,1,0), (0,0,0,1) \rangle$. **Y la dimensión es 3.**

---

# Ejercicio 5

Sea $T:R^4\to R^4$ la transformación lineal dada por
$$
T(x,y,z,w) = (x-y,2x+y,3z+w,z+3w)
$$
- (a) *(10 pts.)* Calcular los autovalores reales de $T$
- (b) *(10 pts.)* Calcular los autoespacios de los autovalores calculados en el punto anterior.
- (c) *(5 pts.)* Decidir si T es diagonalizable.


---

## Punto a

La matriz asociada a esta transformación lineal es:
$$
A= \begin{bmatrix}
1 & -1 & 0 & 0 \\
2 & 1 & 0 & 0 \\
0 & 0 & 3 & 1 \\
0 & 0 & 1 & 3 
\end{bmatrix}
$$
Ahora se deben hallar los autovalores y autovectores de $A$

---

Planteo el polinomio característico: 
$$\chi_A(x)=\det(x Id-A) = 
\begin{vmatrix}
x-1 & 1 & 0 & 0 \\
-2 & x-1 & 0 & 0 \\
0 & 0 & x-3 & -1 \\
0 & 0 & -1 & x-3
\end{vmatrix}$$
---

Obtengo el determinante usando el método de cofactores:
$$
\begin{vmatrix}
x-1 & 1 & 0 & 0 \\
-2 & x-1 & 0 & 0 \\
0 & 0 & x-3 & -1 \\
0 & 0 & -1 & x-3
\end{vmatrix} = (x-1) \cdot
\begin{vmatrix}
x-1 & 0 & 0 \\
0 & x-3 & -1 \\
0 & -1 & x-3
\end{vmatrix} - (-2)\cdot 
\begin{vmatrix}
1 & 0 & 0 \\
0 & x-3 & -1 \\
0 & -1 & x-3
\end{vmatrix}
$$
$$
 = (x-1)^2\cdot 
\begin{vmatrix}
x-3 & -1 \\
-1 & x-3
\end{vmatrix} + 2 \cdot
\begin{vmatrix}
x-3 & -1 \\
-1 & x-3
\end{vmatrix} = 
\begin{vmatrix}
x-3 & -1 \\
-1 & x-3
\end{vmatrix} \cdot ((x+1)^2+2)
$$
$$
 = (x^2−6⁢x+8) \cdot ((x+1)^2+2) = (x^2−6⁢x+8) \cdot (x^2-2x+3)
$$
$$
= (x-2)\cdot (x-4)\cdot (x^2-2x+3)
$$
Los únicos autovalores reales de $A$ son $2,4$.

---

## Punto b

Para hallar los autoespacios hay que resolver dos sistemas de ecuaciones:
$$
(2Id - A)X = 0 \Rightarrow 
\begin{bmatrix}
1 & 1 & 0 & 0 \\
-2 & 1 & 0 & 0 \\
0 & 0 & -1 & -1 \\
0 & 0 & -1 & -1
\end{bmatrix} \cdot
\begin{bmatrix}
x_1 \\
x_2 \\
x_3 \\
x_4
\end{bmatrix} = 
\begin{bmatrix}
0 \\
0 \\
0 \\
0
\end{bmatrix}
$$
Reduzco la matriz
$$
\begin{bmatrix}
1 & 1 & 0 & 0 \\
-2 & 1 & 0 & 0 \\
0 & 0 & -1 & -1 \\
0 & 0 & -1 & -1
\end{bmatrix} \sim
\begin{bmatrix}
1 & 1 & 0 & 0 \\
0 & 3 & 0 & 0 \\
0 & 0 & -1 & -1 \\
0 & 0 & 0 & 0
\end{bmatrix} \
$$
---

De acá salen las siguientes ecuaciones: $x_1+x_2 = 0, \ 3x_2 = 0, \ -x_3-x_4 = 0$, tomando un vector $(x_1,x_2,x_3,x_4)$, las soluciones son de la forma $(0, 0, -x_4, x_4)$, es decir el autoespacio asociado a $2$ es $V_2 = \{ t\cdot (0,0,-1,1) : t\in R \}$.

---

$$
(4Id - A)X = 0 \Rightarrow 
\begin{bmatrix}
3 & 1 & 0 & 0 \\
-2 & 3 & 0 & 0 \\
0 & 0 & 1 & -1 \\
0 & 0 & -1 & 1
\end{bmatrix} \cdot
\begin{bmatrix}
x_1 \\
x_2 \\
x_3 \\
x_4
\end{bmatrix} = 
\begin{bmatrix}
0 \\
0 \\
0 \\
0
\end{bmatrix}
$$
Reduzco la matriz
$$
\begin{bmatrix}
3 & 1 & 0 & 0 \\
-2 & 3 & 0 & 0 \\
0 & 0 & 1 & -1 \\
0 & 0 & -1 & 1
\end{bmatrix} \sim
\begin{bmatrix}
3 & 1 & 0 & 0 \\
0 & 11/3 & 0 & 0 \\
0 & 0 & 1 & -1 \\
0 & 0 & 0 & 0
\end{bmatrix} 
$$

---

De acá salen las siguientes ecuaciones: $3x_1+x_2 = 0, \ \frac{11}{3}x_2 = 0, \ x_3 - x_4 = 0$, tomando un vector $(x_1,x_2,x_3,x_4)$, las soluciones son de la forma $(0,0,1,1)$, es decir el autoespacio asociado a $4$ es $V_4 = \{ t\cdot (0,0,1,1) : t\in R \}$.

---

## Punto c

La matriz no es diagonizable, ya que no existen $4$ autovectores linealmente independientes que generen a $\mathbb{R}^4$.

---

# Ejercicio 6
*(10 pts.)* Consideremos el $R$-espacio vectorial $R_4[x]$. Definamos
$$W = \{ p(x) \in R_4[x] : p(1) - p(2) = 0\}$$
Calcular la dimensión de $W$.

---

Primero, recordemos que $R_4[x]$ es el espacio de todos los polinomios de grado estrictamente menor que 4. Por lo tanto, una base para $R_4[x]$ es $\{1, x, x^2, x^3\}$.
Ahora, queremos encontrar todos los polinomios $p(x)$ en $R_4[x]$ que satisfacen la condición $p(1) - p(2) = 0$. Esto significa que queremos encontrar todos los polinomios tales que el valor del polinomio en $x=1$ es igual al valor del polinomio en $x=2$.

Un polinomio general en $R_4[x]$ puede escribirse como $p(x) = a + bx + cx^2 + dx^3$. La condición $p(1) - p(2) = 0$ se convierte en:

$$
(a + b + c + d) - (a + 2b + 4c + 8d) = 0
$$

---

Simplificando, obtenemos:
$$
-b - 3c - 7d = 0
$$
Entonces podemos reescribir a $W$ como:
$$
W = \{ a+bx+cx^2+dx^3 : -b-3c-7d = 0 \  ; \  a,b,c,d \in R \}
$$
Simplificándolo un poco mas:
$$
W = \{ a+(-3c-7d)x+cx^2+dx^3 : -b-3c-7d = 0 \  ; \  a,c,d \in R \}
$$
Por la cantidad de variables libres, se deduce que la **dimensión de $W$ es 2**.

---

## Ejercicio 7

Sean $V$ un espacio de dimensión $5$ y $\mathcal{B}$ una base de $V$. Si $S,T : V\to V$ son transformaciones lineales tales que la matriz $[S\circ T]_{\mathcal{B}}$ es igual a 
$$
\begin{bmatrix}
1 & 2 & 3 & 2 & 2 \\
0 & 6 & 7 & 0 & 8 \\
0 & 0 & 5 & 2 & 3 \\
0 & 0 & 0  & 3 & 7 \\
0 & 0 & 0 & 0 & 3
\end{bmatrix}
$$
Demostrar que $T$ es un isomorfismo.

---

Hay un teorema que dice lo siguiente:


Sean $V,W$ espacios vectoriales de dimensión finita sobre $K$ tal que $\dim V = \dim W$. Sea $T: V \to W$ transformación lineal. Entonces, son equivalentes: 
- $T$ es un isomorfismo. 
- $T$ es monomorfismo. 
- $T$ es epimorfismo. > - Si $\{v_1,\ldots,v_n \}$ es una base de $V$, entonces $\{T(v_1),\ldots,T(v_n) \}$ es una base de $W$.


---

Dado que $T: V \to V$ es una transformación lineal y $\dim V = \dim V$, podemos aplicar el teorema directamente. Solo necesitamos demostrar que $T$ es un monomorfismo (inyectivo) o un epimorfismo (sobreyectivo), o que la imagen de una base de $V$ bajo $T$ es una base de $V$. 
En este caso, dado que la matriz de la transformación compuesta $S \circ T$ es invertible (como se puede ver por el hecho de que todos los elementos de la diagonal principal son distintos de cero), esto implica que $S \circ T$ es un isomorfismo. Pero para que la composición de dos transformaciones lineales sea un isomorfismo, ambas transformaciones deben ser isomorfismos. Por lo tanto, $T$ debe ser un isomorfismo.


