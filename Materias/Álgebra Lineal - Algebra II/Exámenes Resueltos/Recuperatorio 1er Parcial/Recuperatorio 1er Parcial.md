---
header: Recuperatorio 1er Parcial
paginate: "true"
Materia: Álgebra
footer: https://github.com/PedroMVillar/Algebra-Lineal-Archives
---
# Ejercicio 1

Sea $\mathbb{k}$ un cuerpo. Sean $A,B,C \in M_n(\mathbb{k})$.
- (a) *(5 pts)* Defina el producto de dos matrices $A \cdot B$.
- (b) *(10 pts.)* Demostrar que se cumple la asociatividad del producto: $A \cdot (B \cdot C) = (A\cdot B) \cdot C$

---

Sean $A=[a_{ij}]$ matriz $m \times n$ y $B=[b_{ij}]$ matriz $n \times p$, entonces $C=[c_{ij}]$ matriz $m \times p$  es el *producto* de $A$ y $B$, si 
$$ c_{ij} = a_{i1}b_{1j}+a_{i2}b_{2j}+\cdots+a_{in}b_{nj}= \sum_{k=1}^{n}a_{ik}b_{kj}.$$
Es decir, los elementos que ocupan la posición $ij$ en la matriz producto, se obtienen sumando 	los productos que resultan de multiplicar los elementos de la fila $i$ en la primera matriz por los elementos de la columna $j$ de la segunda matriz.

---

Al producto de $A$ por $B$ lo denotamos $AB$. Se puede visualizar de la siguiente forma:
$$ \begin{align*} \left[ \begin{array}{cccc} a_{11} & a_{12} & \cdots & a_{1n}\\ a_{21} & a_{22} & \cdots & a_{2n}\\ \vdots & \vdots & & \vdots\\ \textcolor{red}{a_{i1}} & \textcolor{red}{a_{i2}} & \cdots & \textcolor{red}{a_{in}}\\  \vdots & \vdots & & \vdots\\ a_{m1} & a_{m2} & \cdots & a_{mn} \end{array} \right] \cdot \left[ \begin{array}{ccc} \cdots & \textcolor{blue}{b_{1j}} & \cdots\\  \cdots & \textcolor{blue}{b_{2j}} & \cdots\\ & \textcolor{blue}{\vdots} & \\ \cdots & \textcolor{blue}{b_{nj}} & \cdots \end{array} \right]= \left[ \begin{array}{ccc} &\vdots&\ \cdots&\sum_{k=1}^n\textcolor{red}{a_{ik}}\cdot \textcolor{blue}{b_{kj}}&\cdots\\ &\vdots& \end{array}\right] \end{align*}
$$

---

# Ejercicio 2
Sea $R$ el plano en $\mathbb{R}^3$ que pasa por los puntos $(0,2,1), (0,0,-2)$ y $(0,1,0)$. Sea $P$ el plano que es paralelo al plano $R$ y pasa por el punto $(2,0,1)$. Dado $a\in \mathbb{R}$, consideremos $\Pi_a$ el plano $\Pi_a = \{ (x,y,z)\in R^3 : x+y-az = 4 \}.$
- (a) *(25 pts.)* Dar la ecuación implícita de $P$.
- (b) *(15 pts.)* Determinar todos los valores $a\in R$, tales que el punto $(1,1,0) \in P \cap \Pi_a$.

---

## Punto a
Primero voy a expresar de forma normal al plano $R$, se tiene que pasa por 3 puntos, por lo que si busco dos pares de vectores no colineales entre sí, puedo obtener mis dos vectores generadores, para luego haciendo el producto cruz entre los vectores generadores obtener el vector normal al plano:
Los vectores generadores serán los siguientes
$$
(0,2,1)-(0,0,-2) = (0,2,3)
$$
$$
(0,2,1)-(0,1,0) = (0,1,1)
$$
---

Luego para obtener el vector normal:
$$
(0,2,3)\times (0,1,1) = (-1,0,0)
$$
Con esto se tiene que el plano $R$ se puede definir de la siguiente forma:
$$
\langle (x,y,z) - (0,2,1), (-1,0,0)\rangle = 0
$$

---

Como por hipótesis el plano $P$ es paralelo al plano $R$, por definición sus vectores normales serán el mismo, por ello se puede definir a $P$ como:
$$
\langle (x,y,z) - (2,0,1), (-1,0,0)\rangle = 0
$$
Para pasarlo a forma implícita, se tiene que $(-1)\cdot x + 0 \cdot y + 0 \cdot y = d$ y luego para obtener $d$, evalúo en el punto $(2,0,1)$ y así la ecuación implícita queda $-x=-2$ y el plano $P$ quedará definido de forma implícita como:
$$
P = \{ (x,y,z) \in R^3 : x = 2 \}
$$

---

## Punto b
El punto $(1,1,0) \notin P \Rightarrow (1,1,0) \notin P \cap \Pi_a$. No vale para ningún $a$.

---

# Ejercicio 3
*(10 pts.)*  Sea $A\begin{bmatrix} x & y & z \\ 3 & 0 & 2 \\ 1 & 1 & 1 \end{bmatrix} \in M_3(\mathbb{R})$. Sabiendo que $det(A)=0$ calcular el determinante de la matriz
$$
B = \begin{bmatrix}
x & y & z \\
3x+3 & 3y & 3z+2 \\
x+1 & y+1 & z+1
\end{bmatrix}
$$

---

Veamos que $A$ es equivalente por filas a $B$ y analicemos que operaciones elementales se le realizaron para analizar el comportamiento del determinante:
$$
\begin{bmatrix} x & y & z \\ 3 & 0 & 2 \\ 1 & 1 & 1 \end{bmatrix} \xrightarrow{f_2+3f_1}
\begin{bmatrix} x & y & z \\ 3x+3 & 3y & 3z +2 \\ 1 & 1 & 1 \end{bmatrix} \xrightarrow{f_3+f_1}
\begin{bmatrix} x & y & z \\ 3x+3 & 3y & 3z +2 \\ x+1 & y+1 & z+1 \end{bmatrix}
$$
Se le aplicaron operaciones de tipo $e_2$, por lo tanto el determinante no va a ser modificado, entonces $det(B)=0$.

---

# Ejercicio 4
Sea
$$
A = \begin{bmatrix}
0 & 1 & 1 \\
0 & 2 & 0 \\
-1 & 0 & 1
\end{bmatrix}
$$
- (a) *(15 pts.)* Calcular los autovalores reales de $A$.
- (b) *(20 pts.)* Calcular los autoespacios en $\mathbb{R}^3$ de los autovalores obtenidos en el punto anterior.

---

## Punto a
Para hallar los autovalores de $A$, planteo el polinomio característico:
$$
\chi(x) = det(A-xID) = 
\begin{vmatrix}
-x & 1 & 1 \\
0 & 2-x & 0 \\
-1 & 0 & 1-x
\end{vmatrix}
$$
Expandiendo sobre la fila 2:
$$
\begin{vmatrix}
-x & 1 & 1 \\
0 & 2-x & 0 \\
-1 & 0 & 1-x
\end{vmatrix} = (2-x) \cdot
\begin{vmatrix}
-x & 1 \\
-1& 1-x
\end{vmatrix} = (2-x) ((-x)(1-x)+1) = (2-x)(x^2-x+1)
$$
El polinomio $x^2-x+1$ no tiene raíces reales, por lo que el único autovalor real es $x=2$.

---

## Punto b

Para hallar el autovector asociado al autovalor $x=2$ planteo el siguiente sistema:
$$
\begin{bmatrix}
-2 & 1 & 1 \\
0 & 0 & 0 \\
-1 & 0 & -1
\end{bmatrix}
\begin{bmatrix}
x \\
y \\
z
\end{bmatrix} = 
\begin{bmatrix}
0 \\
0 \\
0
\end{bmatrix}
$$
Primero reduzco la matriz:
$$
\begin{bmatrix}
-2 & 1 & 1 \\
0 & 0 & 0 \\
-1 & 0 & -1
\end{bmatrix} \xrightarrow{f_1-2f_3}
\begin{bmatrix}
0 & 1 & 3 \\
0 & 0 & 0 \\
-1 & 0 & -1
\end{bmatrix} \xrightarrow{(-1)f_3}
\begin{bmatrix}
0 & 1 & 3 \\
0 & 0 & 0 \\
1 & 0 & 1
\end{bmatrix}
$$
Salen las ecuaciones: $y +3z = 0$ y $x+z=0$, entonces $y=-3z$ y $x = -z$, las soluciones son de la forma $(-z,-3z,z)$, el autovector asociado al autovalor $2$ es $(-1,-3,1)$ y el autoespacio es $V_2 = \langle (-1,-3,1) \rangle$.
