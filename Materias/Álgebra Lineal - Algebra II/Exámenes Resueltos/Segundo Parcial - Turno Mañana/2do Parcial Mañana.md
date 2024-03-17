---
header: Parcial 2 Turno Mañana - Solución
paginate: "true"
Materia: Álgebra
footer: https://github.com/PedroMVillar/Algebra-Lineal-Archives
---
# Ejercicio 1
*(20 pts.)* Sea $\mathbb{k}$ un cuerpo y $V,W,U$ espacios vectoriales sobre $\mathbb{k}$. Sean $T:V\to W$ y $S:W\to U$ transformaciones lineales. Demostrar que la composición de $S \circ T$ es una transformación lineal.

---

Para probar que $S\circ T$ es transformación lineal, hay que probar que cumple las dos propiedades de transformación lineal:
- $(S\circ T)(v+v') = (S\circ T)(v)+(S\circ T)(v')$
$$
(S\circ T)(v+v') = S(T(v+v'))
$$
$$
= S(T(v)+T(v')) = S(T(v))+S(T(v')) = (S\circ T)(v)+(S\circ T)(v')
$$

- $(S\circ T)(\lambda v) = \lambda (S\circ T)(v)$
$$
(S\circ T)(\lambda v) = S(T(\lambda v))
$$
$$
= S(\lambda T(v)) = \lambda S(T(v)) = \lambda (S\circ T)(v)
$$

Con esto queda probado que $S\circ T$ **es transformación lineal**. 

---

# Ejercicio 2

Sea $T : \mathbb{R}^3 \to \mathbb{R}_3[x]$ definida por
$$
T(a,b,c) = (a+b)x^2+(2a+4c)x+a-b+4c
$$
- (a) *(15 pts.)*  Dar la dimensión del núcleo de $T$. Justifique apropiadamente.
- (b) *(10 pts.)* Calcular la matriz de la transformación $T$ con respecto a la base canónica ordenada $\mathcal{C}= \{ e_1,e_2,e_3\}$ de $\mathbb{R}^3$ y la base ordenada $\mathcal{B} = \{1,1+x,1+x+x^2\}$.
- (c) *(15 pts.)* Calcular los autovalores reales y complejos de la matriz $[T]_{\mathcal{CB}}$.

---

## Punto a

El núcleo está formado por definición, por los vectores $(a,b,c)$ tal que $T(a,b,c) = 0$, entonces podemos formar la siguiente ecuación
$$
(a+b)x^2+(2a+4c)x+a-b+4c = 0x^2 + 0x+0
$$
Que deriva al siguiente sistema de ecuaciones, ya que la igualdad de polinomios es una igualdad coeficiente a coeficiente:
$$
\begin{cases}
a+b = 0 \\
2a+4c = 0 \\
0-b+4c = 0
\end{cases}
$$

---

De la primera ecuación $a=-b$, luego reemplazo en la segunda $-2b + 4c =0 \Rightarrow c = \frac{1}{2}b$, por lo tanto el núcleo queda definido como:
$$
Nu(T) = \left \{ (-b,b,\frac{1}{2}b) : b \in \mathbb{R} \right \} = \left \langle (-1,1,\frac{1}{2}) \right \rangle
$$
Probemos un ejemplo, tomando $v = 2 \cdot (-1,1,\frac{1}{2}) = (-2,2,1)$:
$$
T((-2,2,1)) = (-2+2)x^2+(-4+4)x-2-2+4 = 0
$$

---

## Punto b

Para hallar $[T]_{\mathcal{CB}}$ primero aplico $T$ a los vectores que conforman la base $\mathcal{C}$ y luego busco las coordenadas de dichos resultados en $\mathcal{B}$:

- $T(1,0,0) = x^2+2x+1$
- $T(0,1,0) = x^2-1$
- $T(0,0,1) = 4x + 4$

Para hallar los vectores coordenada con respecto a la base $\mathcal{B}$ se forman los siguientes problemas:

---

1. $[T(1,0,0)]_{\mathcal{B}} = [x^2+2x+1]_{\mathcal{B}} = \begin{bmatrix} a \\ b \\c \end{bmatrix}$ donde $a,b$ y $c$ se obtienen de:

$$
\begin{align*}
x^2+2x+1 &= a \cdot (1) + b\cdot (1+x) + c \cdot (1+x+x^2) \\
&= a + b + bx + c + cx + cx^2 \\
&= cx^2 + (b+c)x+(a+b+c) 
\end{align*}
$$
Se arma el sistema
$$
\begin{cases}
c = 1 \\
b+c = 2 \\
a+b+c = 1
\end{cases}
$$

---

Reemplazando $c$ en la segunda ecuación se obtiene $b=1$ y luego con ambos valores en la tercera ecuación, $a = -1$, esto quiere decir que:
$$
x^2+2x+1 = (-1) \cdot (1) + 1\cdot (1+x) + 1 \cdot (1+x+x^2) = -1+1+x+1+x+x^2 = x^2+2x+1
$$

---

2. $[T(0,1,0)]_{\mathcal{B}} = [x^2-1]_{\mathcal{B}} = \begin{bmatrix} a \\ b \\c \end{bmatrix}$ donde $a,b$ y $c$ se obtienen de:


$$
\begin{align*}
x^2-1 &= a \cdot (1) + b\cdot (1+x) + c \cdot (1+x+x^2) \\
&= a + b + bx + c + cx + cx^2 \\
&= cx^2 + (b+c)x+(a+b+c) 
\end{align*}
$$
Se arma el sistema
$$
\begin{cases}
c = 1 \\
b+c = 0 \\
a+b+c = -1
\end{cases}
$$

---

Reemplazando $c$ en la segunda ecuación se obtiene $b=-1$ y luego con ambos valores en la tercera ecuación, $a = -1$, esto quiere decir que:
$$
x^2-1 = (-1) \cdot (1) + (-1)\cdot (1+x) + 1 \cdot (1+x+x^2) = -1 -1 - x + 1 + x + x^2 = x^2-1
$$

---

3. $[T(0,0,1)]_{\mathcal{B}} = [4x+4]_{\mathcal{B}} = \begin{bmatrix} a \\ b \\c \end{bmatrix}$ donde $a,b$ y $c$ se obtienen de:


$$
\begin{align*}
4x+4 &= a \cdot (1) + b\cdot (1+x) + c \cdot (1+x+x^2) \\
&= a + b + bx + c + cx + cx^2 \\
&= cx^2 + (b+c)x+(a+b+c) 
\end{align*}
$$
Se arma el sistema
$$
\begin{cases}
c = 0 \\
b+c = 4 \\
a+b+c = 4
\end{cases}
$$

---

Reemplazando $c$ en la segunda ecuación se obtiene $b=4$ y luego con ambos valores en la tercera ecuación, $a = 0$, esto quiere decir que:
$$
4x+4 = 0 \cdot (1) + 4\cdot (1+x) + 0 \cdot (1+x+x^2) = 4x + 4
$$

---

Los 3 vectores coordenadas obtenidos son, $[T(1,0,0)]_{\mathcal{B}} = \begin{bmatrix} -1 \\ 1 \\ 1 \end{bmatrix}$, $[T(0,1,0)]_{\mathcal{B}} = \begin{bmatrix} -1 \\ -1 \\ 1 \end{bmatrix}$ y $[T(0,0,1)]_{\mathcal{B}} = \begin{bmatrix} 0 \\ 4 \\ 0 \end{bmatrix}$  , al colocarlos como columnas se obtiene $[T]_{\mathcal{CB}}$:
$$
[T]_{\mathcal{CB}} = \begin{bmatrix}
-1 & -1 & 0 \\
1 & -1 & 4 \\
1 & 1 & 0
\end{bmatrix}
$$

---

## Punto c

Para hallar los autovalores planteo el polinomio característico:
$$
\chi (x) = det(A-xId) = 
\begin{vmatrix}
-1-x & -1 & 0 \\
1 & -1-x & 4 \\
1 & 1 & -x
\end{vmatrix}
$$
Simplifico un poco la matriz:
$$
\begin{bmatrix}
-1-x & -1 & 0 \\
1 & -1-x & 4 \\
1 & 1 & -x
\end{bmatrix} \xrightarrow{C_1​−(x+1)C_2}
\begin{bmatrix}
0 & -1 & 0 \\
(x-1)^2+1 & -1-x & 4 \\
-x & 1 & -x
\end{bmatrix}
$$

---

Ahora calculo el polinomio expandiendo por la fila $1$:
$$
\begin{vmatrix}
0 & -1 & 0 \\
(x-1)^2+1 & -1-x & 4 \\
-x & 1 & -x
\end{vmatrix} = 
\begin{vmatrix}
(x-1)^2+1 & 4 \\
-x & -x
\end{vmatrix} = ((x-1)^2+1)(-x)-4(-x)= -x^3-2x^2+2x = x (-x^2-2x+2)
$$
Un autovalor es $x=0$ y para los demás, factorizo el polinomio $-x^2-2x+2$ usando bhaskara:
$$
\frac{2\pm \sqrt{4+4\cdot2}}{-2} = \frac{2\pm \sqrt{12}}{-2} = -1 \pm \frac{\sqrt{12}}{-2} = -1 \pm \frac{\sqrt{2^2\cdot 3}}{2} = -1 \pm \frac{2\sqrt{3}}{2} = -1 \pm \sqrt{3}
$$
Los autovalores son $x=0$, $x = -1+\sqrt{3}$ y $x=-1-\sqrt{3}$.

---

# Ejercicio 3
*(30 pts.)* Definir una transformación lineal $T:\mathbb{R}^3 \to M_2(\mathbb{R})$ que verifique que
$$
Nu(T) = \{ (x,y,z) : z = x = 3y \}
$$
$$
Im(T) = \left \{  \begin{pmatrix} a & b \\ c & d \end{pmatrix}  \in M_2(\mathbb{R}) \ | \ b=a-c, \ b-d = c \right \}
$$
Escribir explícitamente $T(x,y,z)$ para cualquier $(x,y,z) \in \mathbb{R}^3$. Justifique cada paso.

---

- El núcleo está definido como
$$
Nu(T) = \{ (x,y,z) : z = x = 3y \}
$$
Que es lo mismo que
$$
= \{ (3y,y,3y) : y \in \mathbb{R} \} = \langle (3,1,3) \rangle
$$

---

- La imagen está definida como
$$
Im(T) = \left \{  \begin{pmatrix} a & b \\ c & d \end{pmatrix}  \in M_2(\mathbb{R}) \ | \ b=a-c, \ b-d = c \right \}
$$
Que es lo mismo que
$$
= \left \{  \begin{pmatrix} a & a-c \\ c & a-2c \end{pmatrix}  \in M_2(\mathbb{R}) \ | a,c \in \mathbb{R} \right \} = \left \langle  \begin{pmatrix} 1 & 1 \\ 0 & 1 \end{pmatrix}, \begin{pmatrix} 0 & -1 \\ 1 & -2 \end{pmatrix} \right \rangle
$$


---

Por teorema, si se tiene un vector $v_0$ que pertenece al núcleo y expandimos el conjunto a $\{v_0, v_1, v_2, v_3 \}$ de forma tal que formen una base de $\mathbb{R}^3$, entonces $T(v_1), T(v_2), T(v_3)$ generaran a la imagen de $T$.
Por lo tanto completo la base
$$
\{ (3,1,3), (1,0,0), (0,1,0) \}
$$
Y planteo las transformaciones:
- $T(1,0,0) = \begin{pmatrix} 1 & 1 \\ 0 & 1 \end{pmatrix}$
- $T(0,1,0) = \begin{pmatrix} 0 & -1 \\ 1 & -2 \end{pmatrix}$
- $T(3,1,3) = \begin{pmatrix} 0 & 0 \\ 0 & 0 \end{pmatrix}$

---

Ahora obtengo el vector coordenada de $(x,y,z)$ con respecto a la base anterior:
$$
\begin{align*}
(x,y,z) &= a\cdot (1,0,0) + b\cdot (0,1,0) + c \cdot (3,1,3) \\
&= (a,0,0) + (0,b,0) + (3c,c,3c) \\
&= (a+3c, b+c, 3c)
\end{align*}
$$
Acá se forma el sistema
$$
\begin{cases}
a + 3c = x \\
b+c = y \\
3c = z
\end{cases}
$$
De la tercera ecuación, $c = \frac{1}{3}z$, reemplazando en la primera y segunda ecuación: $a + 3\frac{1}{3}z = x$ y $b+\frac{1}{3}z = y$, implica que $a = x-z$ y $b= y-\frac{1}{3}z$.

---

Esto quiere decir que
$$
(x,y,z) = (x-z) \cdot (1,0,0) + (y-\frac{1}{3}z) \cdot (0,1,0) + \frac{1}{3}z \cdot (3,1,3) 
$$
Aplico transformación lineal de cada lado de la ecuación
$$
\begin{align*}
T(x,y,z) &= T((x-z) \cdot (1,0,0) + (y-\frac{1}{3}z) \cdot (0,1,0) + \frac{1}{3}z \cdot (3,1,3)) \\
&= (x-z) \cdot T(1,0,0) + (y-\frac{1}{3}z) \cdot T(0,1,0) + \frac{1}{3}z \cdot T(3,1,3) \\
&= (x-z) \cdot \begin{pmatrix} 1 & 1 \\ 0 & 1 \end{pmatrix} + (y-\frac{1}{3}z) \cdot \begin{pmatrix} 0 & -1 \\ 1 & -2 \end{pmatrix} + \frac{1}{3}z \cdot \begin{pmatrix} 0 & 0 \\ 0 & 0 \end{pmatrix} \\
&= \begin{pmatrix} x-z & x-z \\ 0 & x-z \end{pmatrix} + \begin{pmatrix} 0 &  \frac{1}{3}z - y\\ y - \frac{1}{3}z & \frac{2}{3}z-2y \end{pmatrix} \\
&= \begin{pmatrix} x-z & x-z + \frac{1}{3}z - y \\ y - \frac{1}{3}z & x-z+ \frac{2}{3}z-2y \end{pmatrix}
\end{align*}
$$

---

Para corroborar el resultado, podemos verificar que el vector $(3,1,3)$ pertenezca al núcleo:
$$
T(3,1,3) = \begin{pmatrix} 3-3 & 3-3+\frac{1}{3}3-1 \\ 1-\frac{1}{3}3 & 3-3+\frac{2}{3}3-2 \end{pmatrix} = \begin{pmatrix} 0 & 0 \\ 0 & 0 \end{pmatrix}
$$
Por lo tanto la transformación queda definida como:
$$
T(x,y,z) = \begin{pmatrix} x-z & x-z + \frac{1}{3}z - y \\ y - \frac{1}{3}z & x-z+ \frac{2}{3}z-2y \end{pmatrix}
$$

---

# Ejercicio 4
*(10 pts.)* Sea $T: M_2(\mathbb{R}) \to \mathbb{R}$ una transformación lineal **no** nula. Demostrar que existe una matriz triangular superior $A\in M_2(\mathbb{R})$ **no nula** tal que $T(A) = 0$.

---

Consideremos la matriz
$$
A = \begin{bmatrix}
a & b \\ 0 & c \end{bmatrix}
$$
Ahora aplico transformación lineal de cada lado de la ecuación
$$
T(A) = T \left ( \begin{bmatrix}
a & b \\ 0 & c \end{bmatrix} \right ) =
T \left ( a\begin{bmatrix}
1 & 0 \\ 0 & 0 \end{bmatrix} +
b\begin{bmatrix}
0 & 1 \\ 0 & 0 \end{bmatrix} + 
c\begin{bmatrix}
0 & 0 \\ 0 & 1 \end{bmatrix}
\right) =
a T \left (  \begin{bmatrix}
1 & 0 \\ 0 & 0 \end{bmatrix} \right) +
b T \left (  \begin{bmatrix}
0 & 1 \\ 0 & 0 \end{bmatrix} \right) + 
c T \left (  \begin{bmatrix}
0 & 0 \\ 0 & 1 \end{bmatrix} \right)
$$

---

Como buscamos $T(A)=0$, tenemos que resolver el siguiente sistema de ecuaciones:
$$
\begin{cases}
a T \left (  \begin{bmatrix}
1 & 0 \\ 0 & 0 \end{bmatrix} \right) +
b T \left (  \begin{bmatrix}
0 & 1 \\ 0 & 0 \end{bmatrix} \right) + 
c T \left (  \begin{bmatrix}
0 & 0 \\ 0 & 1 \end{bmatrix} \right) = 0 \\
\\
a \neq 0 \ \vee \ b \neq 0 \ \vee \ c \neq 0 
\end{cases}
$$
El primer requisito es que la transformación lineal $T$ sea **no nula**, es decir, que exista al menos una matriz $B∈M_2​(\mathbb{R})$ tal que $T(B)\neq0$. Esto implica que al menos uno de los términos sea distinto de cero. 

---

Sin pérdida de generalidad, supongamos que $T \left ( a\begin{bmatrix} 1 & 0 \\ 0 & 0 \end{bmatrix} \right) \neq 0$ . Entonces, podemos elegir a=1, b=0 y c=0, y obtenemos la matriz:
$$
A = \begin{bmatrix}
1 & 0 \\ 0 & 0 \end{bmatrix}
$$


que es triangular superior, **no nula** y cumple que $T(A)=0$, como queríamos demostrar.