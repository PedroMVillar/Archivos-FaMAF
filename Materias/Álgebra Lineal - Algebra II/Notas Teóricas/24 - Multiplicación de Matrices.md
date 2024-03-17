---
Materia: Álgebra
tags:
  - matrices
---
Sean $A=[a_{ij}]$ matriz $m \times n$ y $B=[b_{ij}]$ matriz $n \times p$, entonces $C=[c_{ij}]$ matriz $m \times p$  es el *producto* de $A$ y $B$, si $$ c_{ij} = a_{i1}b_{1j}+a_{i2}b_{2j}+\cdots+a_{in}b_{nj}= \sum_{k=1}^{n}a_{ik}b_{kj}.$$ Es decir, los elementos que ocupan la posición $ij$ en la matriz producto, se obtienen sumando 	los productos que resultan de multiplicar los elementos de la fila $i$ en la primera matriz por los elementos de la columna $j$ de la segunda matriz. Al producto de $A$ por $B$ lo denotamos $AB$. Se puede visualizar de la siguiente forma:
$$ \begin{align*} \left[ \begin{array}{cccc} a_{11} & a_{12} & \cdots & a_{1n}\\ a_{21} & a_{22} & \cdots & a_{2n}\\ \vdots & \vdots & & \vdots\\ \textcolor{red}{a_{i1}} & \textcolor{red}{a_{i2}} & \cdots & \textcolor{red}{a_{in}}\\  \vdots & \vdots & & \vdots\\ a_{m1} & a_{m2} & \cdots & a_{mn} \end{array} \right] \cdot \left[ \begin{array}{ccc} \cdots & \textcolor{blue}{b_{1j}} & \cdots\\  \cdots & \textcolor{blue}{b_{2j}} & \cdots\\ & \textcolor{blue}{\vdots} & \\ \cdots & \textcolor{blue}{b_{nj}} & \cdots \end{array} \right]= \left[ \begin{array}{ccc} &\vdots&\ \cdots&\sum_{k=1}^n\textcolor{red}{a_{ik}}\cdot \textcolor{blue}{b_{kj}}&\cdots\\ &\vdots& \end{array}\right] \end{align*}
$$

### Ejemplo
Si $$ A = \begin{bmatrix}1&0\\-3&1\end{bmatrix}, \qquad B = \begin{bmatrix}5&-1&2\\15&4&8\end{bmatrix},$$ como $A$ es $2 \times 2$ y $B$ es $2 \times 3$, la matriz $AB$ será $2 \times 3$ y  aplicando la regla, obtenemos: $$AB = \begin{bmatrix}1\times  5 + 0\times 15&1\times (-1) + 0\times 4&1\times 2 + 0\times 8 \\-3\times 5 + 1\times 15&-3\times (-1) + 1\times 4&-3\times 2 + 1\times 8 \end{bmatrix} = \begin{bmatrix} 5 &-1 &2  \\ 0 &7 &2 \end{bmatrix}.$$

## Propiedades
- **1.** Asociativa: $A (B C) = (A B) C, \quad\forall\, A \in M_{m \times n}, \;B \in M_{n \times p}, \;C  \in M_{p \times q},$
- **2.** Elemento neutro: si  $A$ es matriz $m \times n$,  entonces $AId_{n} = A = Id_{m}A,$
- **3.** Distributiva: $A(B + C) = AB + AC,\qquad \forall\, A \in M_{m \times n}, \;B, C \in M_{n \times p},$ y $(A+ B)C = AC + BC,\qquad \forall\, A, B \in M_{m \times n}, \; C \in M_{n \times p}.$

### Demostracion
#### Asociatividad
Sea $A$ una matriz $m\times n$, $B$ una matriz $n\times p$ y $C$ una matriz $p\times q$, hay que demostrar que:
- $[(AB)C]_{ij}=[A(BC)]_{ij}$

Partiendo del lado izquierdo:
$$
[(AB)C]_{ij} = \sum_{k=1}^{p}[AB]_{ik}c_{kj}
$$
$$
= \sum_{k=1}^{p} \left (  \sum_{l=1}^{n}a_{il}b_{lk} \right ) c_{kj} = \sum_{k=1}^{p}  \sum_{l=1}^{n}a_{il}b_{lk}c_{kj}
$$

Ahora mirando el lado derecho:
$$
[A(BC)] = \sum_{k=1}^{n}a_{ik}[BC]_{kj}
$$
$$
= \sum_{k=1}^{n} a_{ik}\left (  \sum_{l=1}^{p}b_{kl}c_{lj} \right ) = \sum_{k=1}^{n} \sum_{l=1}^{p} a_{ik}b_{kl}c_{lj}
$$
Hasta ahora se tiene lo siguiente:
$$
[(AB)C]_{ij} = \sum_{k=1}^{p}  \sum_{l=1}^{n}a_{il}b_{lk}c_{kj}
$$
$$
[A(BC)]_{ij} = \sum_{k=1}^{n} \sum_{l=1}^{p} a_{ik}b_{kl}c_{lj}
$$
Por propiedad de la sumatoria, podemos cambiar el orden:
$$
[(AB)C]_{ij} = \sum_{l=1}^{n} \sum_{k=1}^{p} a_{il}b_{lk}c_{kj}
$$
Luego para comparar con la expresión obtenida de $A(BC)$, se puede notar que las variables de sumatoria son diferentes, simplemente por notación, podemos cambiar dichas variables, ya que la matriz tiene los coeficientes $ij$ y no afectaría al resultado, entonces cambiamos $l=k$ y $k=l$:
$$
[(AB)C]_{ij} = \sum_{k=1}^{n} \sum_{l=1}^{p} a_{ik}b_{kl}c_{lj}
$$
Y aquí se llega a:
$$
[(AB)C]_{ij} = \sum_{k=1}^{n} \sum_{l=1}^{p} a_{ik}b_{kl}c_{lj} = [A(BC)]_{ij}
$$
#### Elemento neutro
Sea $A$ una matriz $m\times n$, hay que probar que:
-  $Id_mA=A=AId_n$

Definimos lo siguiente $Id_m=b_{ij}$ y $Id_n=b_{ij}$ pero por definición de matriz identidad:
$$
b_{ij}\begin{cases}
1 & si \ \ i=j \\
0 & si \ \ i \neq j
\end{cases}
$$
Por definición del producto matricial:
$$
[Id_mA]_{ij}= \sum_{k=1}^{m}b_{ik}a_{kj} = b_{i1}a_{1j}+b_{i2}a_{2j}+...+b_{ii}a_{ij}+...+b_{im}a_{mj}
$$
El único término que sobrevive es $b_{ii}a_{ij}$ ya que los demás son $0$ y $b_{ii}=1$, entonces equivale a $a_{ij}=A$. Análogamente se prueba lo restante de la afirmación.

#### Distributividad
Sea $A$ una matriz $m\times n$, $B$ una matriz $n\times p$ y $C$ una matriz $n\times p$, hay que probar que:
- $A(B+C)= AB + AC$

Se tiene que:
$$
[A(B+C)]_{ij} = \sum_{k=1}^{n}a_{ik}[B+C]_{kj}=\sum_{k=1}^{n}a_{ik}(b_{kj}+c_{kj}) = \sum_{k=1}^{n}a_{ik}b_{kj}+a_{ik}c_{kj} 
$$
$$
= \sum_{k=1}^{n}a_{ik}b_{kj} + \sum_{k=1}^{n}a_{ik}c_{kj} = [AB]_{ij}+[AC]_{ij}
$$

### Observaciones
- Multiplicar cualquier matriz por la matriz nula resulta la matriz nula,
- existen divisores de cero: en general, $AB = 0$ no implica que $A = 0$ o $B = 0$  o,  lo que es lo mismo, el producto de matrices no nulas puede resultar en una matriz nula. Por ejemplo, $$\begin{bmatrix}1&0\\2&0\end{bmatrix} \begin{bmatrix}0&0\\8&1\end{bmatrix} = \begin{bmatrix}0&0\\0&0\end{bmatrix}.$$
- En general no se cumple la propiedad cancelativa: si $A\not=0$ y  $AB = AC$ no necesariamente se cumple que $B = C$. Por ejemplo, $$\begin{bmatrix}2&0\\4&0\end{bmatrix}=
                    \begin{bmatrix}1&0\\2&0\end{bmatrix} \begin{bmatrix}2&0\\8&1\end{bmatrix} =
                    \begin{bmatrix}1&0\\2&0\end{bmatrix} \begin{bmatrix}2&0\\5&3\end{bmatrix}$$
- No se cumple la fórmula del binomio: 	sean $A, B$ matrices $n \times n$, entonces $$\begin{align*}(A+B)^2 &= (A+B)(A+B) \\&= A(A+B) + B(A+B) \\&= AA + AB + BA + BB \\&= A^2 + AB + BA + B^2,\end{align*}$$ y  esta última expresión puede no ser  igual a $A^2 + 2AB + B^2$ ya que el producto de matrices no es conmutativo (en general). 
